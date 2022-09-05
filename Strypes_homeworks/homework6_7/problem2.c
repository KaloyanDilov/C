#include <stdio.h>

void Reverse(char *ptr);

int main()
{
    char str[] = "This is a test";
    unsigned int i = 0;
    while (str[i])
    {
        printf("%c", str[i]);
        i++;
    }
    //printf("\n");

    Reverse(str);

    return 0;
}

void Reverse(char *ptr)
{
    unsigned int count = 0;
    unsigned int i, j, temp_count;

    while (*ptr)
    {
        //printf("%c", *ptr);
        count++;
        ptr++;
    }

    printf("\n");
    // printf("count = %d", count);

   
    for (j = 0; j < count; j++)
    {
        ptr--;
    }

    //printf("%c \n", *ptr);
    char rev_str[count+1];
    temp_count = count;
    rev_str[count+1] = '\0';
    while (*ptr)
    {
        rev_str[temp_count] = *ptr;
        //printf("%c ", rev_str[temp_count]);
        ptr++;
        temp_count--;
    }


    for(i = 0; i <= count; i ++)
    {
        printf("%c", rev_str[i]);
        
    }
    printf("\n");
}