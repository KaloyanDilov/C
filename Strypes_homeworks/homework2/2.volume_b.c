#include<stdio.h>
#include<math.h>

int main(){

    double r, h, l, segment, volume;

    printf("R = ");
    scanf("%lf", &r);
    printf("H = ");
    scanf("%lf", &h);
    printf("L = ");
    scanf("%lf", &l);

    segment = pow(cos((r - h)/r), -1) * r * r - 
    (r - h) * sqrt(2 * r * h - h * h);

    volume = segment * l;

    printf("Volume = %lf\n", volume);

    return 0;
}