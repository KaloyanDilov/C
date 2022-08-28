#include<stdio.h>
#include<stdlib.h>
#include<time.h>

double rand_double();
double rand_double_interval(double a, double b);

int main()
{
    double *ptr;
    int n, m, p, i;

    printf("n = ");
    scanf("%d", &n);

    // Dynamically allocate memory using calloc()
    ptr = (double*)calloc(n, sizeof(double));

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
            ptr[i] = rand_double();
        }

        printf("m = ");
        scanf("%d", &m);

        // Dynamically re-allocate memory using realloc()
        ptr = realloc(ptr, (n + m) * sizeof(double));
 
        // Memory has been successfully allocated
        printf("Memory successfully re-allocated using realloc.\n");

        // Get the new m elements of the array in interval [1, 2]
        for (i = n; i < (n + m); ++i) {
            ptr[i] = rand_double_interval(1, 2);
        }

        printf("p = ");
        scanf("%d", &p);

        // Dynamically re-allocate memory using realloc()
        ptr = realloc(ptr, (n + m + p) * sizeof(double));
 
        // Memory has been successfully allocated
        printf("Memory successfully re-allocated using realloc.\n");

        // Get the new p elements of the array in interval [2, 3]
        for (i = (n + m); i < (n + m + p); ++i) {
            ptr[i] = rand_double_interval(2, 3);
        }
    
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < (m + n + p); ++i) {
            printf("%lf ", ptr[i]);
        }
        printf("\n");
 
        free(ptr);
    }

    return 0;
}

double rand_double()
{
    return ((double)rand()) / ((double)RAND_MAX); // Return numbers [0,1]
}

double rand_double_interval(double a, double b) //Return numbers in interval [a, b]
{
    return (rand_double() * (b - a) + a);
}