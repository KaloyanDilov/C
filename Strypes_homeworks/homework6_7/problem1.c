#include<stdio.h>

unsigned char CheckBit(unsigned int uValue);

int main()
{   
    
    printf("%d \n", CheckBit(0x08));

    return 0; 
}

unsigned char CheckBit(unsigned int uValue)
{
    int i;
    
    unsigned char count = 0;
    for(i = 0; i < 16; i++)
    {
        if(uValue & (1 << i))
        {
            count ++;
        }
        //printf("count = %d \n", count);
    }

    if(count == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}