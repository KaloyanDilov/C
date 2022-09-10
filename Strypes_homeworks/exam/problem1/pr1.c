#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"func.h"

int main()
{
    char *ptr;
    int n, m, k, i, q;
    char str1[] = "abcdefghijklmnopqrstuvwxyz";
    char str2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char str3[] = "!?$@*%-";

    printf("n = ");
    scanf("%d", &n);

    // Dynamically allocate memory using calloc()
    ptr = (char*)calloc(n, sizeof(char));

    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else 
    {
 
        // Memory has been successfully allocated
        printf("Memory successfully allocated using calloc.\n");

        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            ptr[i] = str1[rand_int_i(0, 25)];
        }

        printf("m = ");
        scanf("%d", &m);

        // Dynamically re-allocate memory using realloc()
        ptr = realloc(ptr, (n + m) * sizeof(char));
        if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
        }
 
        // Memory has been successfully allocated
        printf("Memory successfully re-allocated using realloc.\n");

        // Get the new m elements of the array in interval [1, 2]
        for (i = n; i < (n + m); ++i) {
            ptr[i] = str2[rand_int_i(0, 25)];
        }

        printf("k = ");
        scanf("%d", &k);

        // Dynamically re-allocate memory using realloc()
        ptr = realloc(ptr, (n + m + k) * sizeof(char));
        if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
        }
 
        // Memory has been successfully allocated
        printf("Memory successfully re-allocated using realloc.\n");

        // Get the new p elements of the array in interval [2, 3]
        for (i = (n + m); i < (n + m + k); ++i) {
            ptr[i] = str3[rand_int_i(0, 6)];
        }
    
      
       elements(ptr, (m + n + k));

       q = small_letters(ptr, (m + n + k));
       printf("Number of small letters: %d\n", q);
 
        free(ptr);
    }

    return 0;
}

