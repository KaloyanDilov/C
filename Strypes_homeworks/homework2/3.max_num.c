#include<stdio.h>

int main(){

    double num1, num2, num3, max_num;

    printf("num1 = ");
    scanf("%lf",&num1);
    printf("num2 = ");
    scanf("%lf",&num2);
    printf("num3 = ");
    scanf("%lf",&num3);

    max_num = num1;
    if(max_num < num2){
        max_num = num2;
    }

    if(max_num < num3){
        max_num = num3;
    }

    printf("max_num = %lf\n", max_num);

    return 0;
}
