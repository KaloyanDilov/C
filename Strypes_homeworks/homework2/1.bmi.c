#include <stdio.h>
#include <math.h>

int main(){

    double mass, height, bmi, bmi_new;
    
    printf("Маса [kg]: ");
    scanf("%lf", &mass);
    printf("Височина [m]: ");
    scanf("%lf", &height);

    bmi = mass / (height * height);
    bmi_new = 1.3 * mass / (pow(height, 2.5));

    printf("BMI = %lf\n", bmi);
    printf("BMI_new = %lf \n", bmi_new);

    return 0;
}
