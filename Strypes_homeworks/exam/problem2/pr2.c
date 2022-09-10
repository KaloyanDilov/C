#include<stdio.h>

unsigned sumArrayDigits(const int* arr, size_t n);

int main()
{
    int arr[] = {12, 34, 5, 70};

    unsigned s = sumArrayDigits(arr, 4);
    printf("Sum = %d\n", s);

    return 0;

    
}

unsigned sumArrayDigits(const int* arr, size_t n)
    {
        int i, digit;
        unsigned sum = 0;


        for(i = 0; i < n; i++)
        {   digit = arr[i];
            while(digit > 0)
            {
               sum += digit % 10; 
               digit /= 10;
            }
            
        }

        return sum;
    }