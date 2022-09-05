#include<stdio.h>

unsigned int BinSearch(unsigned int *pArray, unsigned int uArraySize, unsigned int uValue);

int main()
{
    unsigned int arr[] = {4, 6, 7, 8, 10, 12, 15, 21};
    unsigned int size = sizeof(arr) / sizeof(arr[0]);
    unsigned int x = 21;
    unsigned int result = BinSearch(arr, size, x);
    
    if(result == 0xFFFF)
    {
        printf("The element %d is not found in array.\n", x);
    }
    else{
        printf("The element %d has index %d in array.\n", x, result);
    }

    return 0;

}

unsigned int BinSearch(unsigned int *pArray, unsigned int uArraySize, unsigned int uValue)
{
    unsigned int low, hi, mid;

    low = 0;
    hi = uArraySize - 1;

    while(low <= hi)
    {
        mid = low + (hi - low) / 2;

        if(pArray[mid] == uValue)
        {
            return mid;
        }
        else if(pArray[mid] < uValue)
        {
            low = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
        
    }

    return 0xFFFF;

}