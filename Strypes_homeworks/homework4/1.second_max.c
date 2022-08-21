#include<stdio.h>

int secondMax(const int* arr, size_t n, int* secondMax);

int main()
{
    int sm;
    int arr[] = {12, 34, 5, 70, 46};

    

    secondMax(arr, 5, &sm);

    printf("%d\n", sm);

    return 0;
}

secondMax(const int* arr, size_t n, int* secondMax)
{

    int firstMax = arr[0];
    *secondMax = arr[0];


    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] > firstMax)
        {
            *secondMax = firstMax;
            firstMax = arr[i];
        }
        else if(arr[i] > *secondMax)
        {
            *secondMax = arr[i];
        }


    }

    return 0;
}