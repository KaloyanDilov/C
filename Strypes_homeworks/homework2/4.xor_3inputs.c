#include<stdio.h>

int main(){

    int X1, X2, X3, Y;

    printf("X1 = ");
    scanf("%d",&X1);
    printf("X2 = ");
    scanf("%d",&X2);
    printf("X3 = ");
    scanf("%d",&X3);

    printf("Y = %d\n", (X1 ^ X2) ^ X3);



    return 0;

}