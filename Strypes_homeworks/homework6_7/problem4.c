#include<stdio.h>
#include<stdint.h>

void Conv(int sValue, char *pBuffer);

int main()
{
    int16_t number = 16025;
    char str[] = "      ";

    Conv(number, str);

    printf("%s", str);

    printf("\n");

    return 0;
}

void Conv(int sValue, char *pBuffer)
{
    int index = 5;
    int digit;

    if(sValue < 0)
    {
        pBuffer[0] = '-';
        sValue *= -1;
    }

    

    while(sValue)
    {
        digit = sValue % 10;

        switch (digit)
        {
        case 0:
            pBuffer[index] = '0';
            break;
        case 1:
            pBuffer[index] = '1';
            break;
        case 2:
            pBuffer[index] = '2';
            break;
        case 3:
            pBuffer[index] = '3';
            break;
        case 4:
            pBuffer[index] = '4';
            break;
        case 5:
            pBuffer[index] = '5';
            break;
        case 6:
            pBuffer[index] = '6';
            break;
        case 7:
            pBuffer[index] = '7';
            break;
        case 8:
            pBuffer[index] = '8';
            break;
        case 9:
            pBuffer[index] = '9';
            break;
        
        default:
            break;
        }

        index--;
        sValue /= 10;

    }

}