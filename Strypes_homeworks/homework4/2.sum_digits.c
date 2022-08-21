#include<stdio.h>
unsigned sumArrayDigits(const int* arr, size_t n);
int main()
{
    int arr[] = {12, 34, 5, 70};

    printf("%d\n", sumArrayDigits(arr, 4));

    return 0;
}

unsigned sumArrayDigits(const int* arr, size_t n)
{
    int i, digits, sum = 0;
    for(i = 0; i < n; i++)
    {
        digits = arr[i];
        while(digits > 0)
        {
            sum += digits % 10;
            //printf("sum = %d\n", sum);
            digits /= 10;
        }


    }

    return sum;

}