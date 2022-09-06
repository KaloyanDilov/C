#include<stdio.h>

void VMirror(unsigned char *pImage);

int main()
{
    unsigned char a = 0x40;
    VMirror(&a);

    printf("0x%X \n", a);

    return 0;
}

void VMirror(unsigned char *pImage)
{
    int i;
    unsigned char mImage = 0x00;

    for(i = 0; i <= 7; i ++)
    {
        if(*pImage & (1 << (7 - i)))
        {
            mImage |= (1 << i);
        }

    }

    *pImage = mImage;

}