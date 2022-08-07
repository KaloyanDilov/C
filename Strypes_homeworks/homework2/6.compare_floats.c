#include<stdio.h>
#include<math.h>

int main(){

    float a, b;

    printf("a = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);

    if(fabs(a - b) < 0.000001 * fmax(a, b)){
        printf("a = b\n");
    }
    else{
        printf("a != b\n");
    }

    return 0;
}