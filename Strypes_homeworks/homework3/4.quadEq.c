#include<stdio.h>
#include<math.h>

int quadEq(double a, double b, double c, double *root1, double *root2){

    double D;

    D = b * b - 4 * a * c;
    
    if(D < 0){

        printf("No real roots!\n");
        return -1;
    }
    
    
    *root1 = (- b - sqrt(D)) / 2 * a;
    *root2 = (- b + sqrt(D)) / 2 * a;
    
    return 0;

}

int main(){

    double k1, k2, k3, x1, x2;
    int result1;

    while(scanf("%lf %lf %lf", &k1, &k2, &k3) != EOF)
    {

        result1 = quadEq(k1, k2, k3, &x1, &x2);
        if(result1 == -1)
        {
            continue;
        }
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);

    }

    return 0;
}