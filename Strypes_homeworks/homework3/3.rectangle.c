#include<stdio.h>

int rectangle(double w, double h, double *S, double *P){

    if((w < 0) || (h < 0)){

        printf("Invalid triangle sides!\n");
        return -1;

    }

    *P = (w + h) * 2;
    *S = w * h;

    return 0;

}

int main(){

    double side1, side2, face, perimeter;
    int x;

    while(scanf("%lf %lf", &side1, &side2) != EOF)
    {

        x = rectangle(side1, side2, &face, &perimeter);
        if(x == -1)
        {
            continue;
        }
        printf("S = %.2lf\n", face);
        printf("P = %.2lf\n", perimeter);

    }

    return 0;
}