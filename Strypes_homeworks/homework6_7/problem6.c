#include<stdio.h>

void Bubble(int *pArray, unsigned int uLen);

int main()
{
    int arr[] = {50, 32, 74, 23, 5, 47, 10};
    Bubble(arr, 7);
    
    return 0;
}

void Bubble(int *pArray, unsigned int uLen)
{
    unsigned int i, j;
    int temp;

    for(i = 0; i < uLen - 1; i++)
    {
        for(j = 0; j < uLen - 1; j++)
        {
            if(pArray[j] > pArray[j + 1])
            {
                temp = pArray[j];
                pArray[j] = pArray[j + 1];
                pArray[j + 1] = temp;

            }
        }
        
    }

    for(i = 0; i < uLen; i++)
    {
        printf("%d ", pArray[i]);
    }

    printf("\n");
    



}