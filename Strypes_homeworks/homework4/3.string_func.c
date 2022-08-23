#include<stdio.h>

unsigned int StrLen(const char * pString);
size_t StrnLen(const char *pString, size_t maxlen);
char* strcpy(char* destination, const char* source);
char* strncpy(char* destination, const char* source, size_t n);
char* strcat(char *dest, const char *src);
char* strncat(char *dest1, const char *src1, size_t maxlen);
int strcmp(const char* s1, const char* s2);
int strncmp(const char* s1, const char* s2, size_t maxlen);
char* StrStr(char* str1, char* substr);

int main()
{   
    char str[100] = "Hello StrLen!";
    printf("lenght = %d\n", StrLen(str));


    char my_str[100] = "Hello strnlen!";
    printf("lenght = %zu\n",StrnLen(my_str, 10));


    char source[] = "C Programming";
    char destination[25];
 
    printf("%s\n", strcpy(destination, source));

    printf("%s\n", strncpy(destination, source, 5));


    char dest[] = "Probe1";
    char src[] = "Probe2";

    printf("%s \n",strcat(dest, src));

    char dest1[] = "Probe1";
    char src1[] = "Probe2";

    printf("%s \n",strncat(dest1, src1, 3));

    char s1[] = "Probe1";
    char s2[] = "Probe2";

    printf("s1 = %s    s2 = %s \n", s1, s2);
    printf("strcmp(s1, s2) = %d \n", strcmp(s1, s2));

    printf("strncmp(s1, s2, 3) = %d \n", strncmp(s1, s2, 3));

    char str1[] = "ab cd efgh";
    char substr[] = "cd";
    char *p;

    p = StrStr(str1, substr);
    printf("String %s is in %s \n", p, str1);

    //printf("StrStr(str1, substr) = %p \n", StrStr(str1, substr));


    return 0;
}


unsigned int StrLen(const char * pString)
{
    unsigned int count = 0;

    if(pString == NULL)
    {
        return 0;
    }

    while(*pString)
    {
        ++count;
        ++pString;
    }

    return count;
}


size_t StrnLen(const char *pString, size_t maxlen)
{
    unsigned int count = 0;

    if(pString == NULL)
    {
        return 0;
    }

    while((*pString) && (count < maxlen))
    {
        ++count;
        ++pString;
    }

    return count;
}


// Function to implement `strcpy()` function
char* strcpy(char* destination, const char* source)
{
    // return if no memory is allocated to the destination
    if (destination == NULL) {
        return NULL;
    }
 
    // take a pointer pointing to the beginning of the destination string
    char *ptr = destination;
 
    // copy the C-string pointed by source into the array
    // pointed by destination
    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }
 
    // include the terminating null character
    *destination = '\0';
 
    // the destination is returned by standard `strcpy()`
    return ptr;
}

// Function to implement `strncpy()` function
char* strncpy(char* destination, const char* source, size_t n)
{
    // return if no memory is allocated to the destination
    if (destination == NULL) {
        return NULL;
    }
 
    // take a pointer pointing to the beginning of the destination string
    char *ptr = destination;
 
    // copy the C-string pointed by source into the array
    // pointed by destination
    int i = 0;
    while ((*source != '\0') && (i < n))
    {
        *destination = *source;
        destination++;
        source++;
        i++;
    }
 
    // include the terminating null character
    *destination = '\0';
 
    // the destination is returned by standard `strcpy()`
    return ptr;
}


//Function to implement 'strcat()' function
char* strcat(char *dest, const char *src)
{
    size_t dest_len = StrLen(dest);
    
    size_t i;    
    for(i = 0; src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }

    dest[dest_len + i] = '\0';

    return dest;
}

//Function to implement 'strncat()' function
char* strncat(char *dest1, const char *src1, size_t maxlen)
{
    size_t dest_len = StrLen(dest1);

    //printf("dest_len = %zu\n", dest_len);
    //printf("maxlen = %zu\n", maxlen );
    
    size_t i;    
    for(i = 0; (src1[i] != '\0') && (i < maxlen); i++)
    {
        dest1[dest_len + i] = src1[i];
    }
    //printf("i = %zu\n", i);
    dest1[dest_len + i] = '\0';

    return dest1;
}

//Function to implement 'strcmp()' function
int strcmp(const char* s1, const char* s2)
{
    while(*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;

    }

    return *s1 - *s2;
}

//Function to implement 'strncmp()' function
int strncmp(const char* s1, const char* s2, size_t maxlen)
{   
    size_t i = 1;
    while(*s1 && (*s1 == *s2) && (i < maxlen))
    {
        s1++;
        s2++;
        i++;

    }

    return *s1 - *s2;
}

//Function to implement 'strstr()' function
char* StrStr(char* str1, char* substr)
{
    char *ptr = str1;

    int lensub = StrLen(substr);
    

    while(*ptr)
    {   
        if(strncmp(ptr, substr, lensub) == 0)
        {
            return ptr;
        }

        ptr++;

        
    }

    return NULL;
    


}

