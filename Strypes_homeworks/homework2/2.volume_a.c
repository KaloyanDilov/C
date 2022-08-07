#include<stdio.h>

int main(){

    double r, h, volume ;

    printf("R = ");
    scanf("%lf", &r);
    printf("H = ");
    scanf("%lf", &h);

    volume = 3.14 * r * r * h;

    printf("Volume = %lf\n", volume);

    return 0;
}