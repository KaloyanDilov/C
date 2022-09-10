#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rand_int_i(int a, int b)
{
    int res = rand() % (b + 1 - a) + a;

    
    return res;
}


void elements(char *arr,int p)
{
    int i;
    printf("The elements: ");
    for (i = 0; i < p; ++i) {
            printf("%c ", arr[i]);
    }
    printf("\n");
}

int small_letters(char *arr, int p)
{
    int i;
    int cnt = 0;
    
    for (i = 0; i < p; ++i) {
            if((arr[i] >= 'a') && (arr[i] <= 'z'))
            {
                cnt++;
            }
            
    }
    
    return cnt;
}


