#include<stdio.h>
#include<math.h>


void Add(const char* p1, const char* p2, char* result);

int main()
{
    const char str1[] = "887";
    const char str2[] = "878";
    char res[] = "";

    printf("%s + %s\n", str1, str2);

    Add(str1, str2, res);

    printf("result = %s \n", res);

    return 0;
}

void Add(const char* p1, const char* p2, char* result)
{
    int len1 = 0, len2 = 0, len, len_min;
    int i, q, carry, digit1, digit2, sum;

    while(*p1)
    {   
        len1++;
        p1++;
    }

    while(*p2)
    {
        len2++;
        p2++;
    }

    if(len1 >= len2)
    {
        len = len1;
        len_min = len2;
    }
    else
    {
        len = len2;
        len_min = len1;
    }

    for(i = 0; i < len1; i++)
    {
        p1--;
    }
    
    for(i = 0; i < len2; i++)
    {
        p2--;
    }
    

    char p1_rev[len1 + 1], p2_rev[len2 + 1];
    
    q = len1 - 1;
    for(i = 0; i < len1; i++)
    {
        p1_rev[q] = *p1;
        q--;
        p1++;
    }
    p1_rev[len1] = '\0';

    for(i = 0; i < len1; i++)
    {
        p1--;
    }

    q = len2 - 1;
    for(i = 0; i < len2; i++)
    {
        p2_rev[q] = *p2;
        q--;
        p2++;
    }

    for(i = 0; i < len2; i++)
    {
        p2--;
    }

    p2_rev[len2] = '\0';


    int result_rev[len + 1];
    carry = 0;

    for(i = 0; i < len; i++)
    {
        digit1 = p1_rev[i] - '0';
        if(i < len_min)
        {
            digit2 = p2_rev[i] - '0';
        }else
        {
            digit2 = 0;
        }

        sum = digit1 + digit2 + carry;
        if(sum < 10)
        {
            result_rev[i] = sum;
            carry = 0;
        }else
        {
            result_rev[i] = sum % 10;
            sum /= 10;
            carry = sum % 10;
        }
        if((i == len - 1) && (carry > 0))
        {
            result_rev[i + 1] = carry;
        }
        else
        {
            result_rev[i + 1] = 0;
        }
    }
    sum = 0;
    for(i= 0; i < len + 1; i++)
    {
        sum += result_rev[i] * pow(10, i);
    }

    q = len;

    for(i = len; i >= 0; i--)
    {
        digit1 = sum % 10;
        result[q] = digit1 + '0';
        sum /= 10;
        q--;
    }

    result[len + 1] = '\0';

}
