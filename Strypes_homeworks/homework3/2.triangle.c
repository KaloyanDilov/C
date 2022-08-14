#include<stdio.h>
#include<math.h>

int triangle(double a, double b, double c, double *S, double *P){

    double root;

    if((a < 0) || (b < 0) || (c < 0)){

        printf("Invalid triangle sides!\n");
        return -1;

    }

    *P = a + b + c;
    root = (*P)/2 * ((*P)/2 - a) * ((*P)/2 - b) * ((*P)/2 - c);
    if(root < 0){

        printf("Invalid triangle sides!\n");
        return -1;
    }
    
    

    *S = sqrt(root);

    return 0;

}

int main(){

    double side1, side2, side3, face, perimeter;
    int x;

    while(scanf("%lf %lf %lf", &side1, &side2, &side3) != EOF)
    {

        x = triangle(side1, side2, side3, &face, &perimeter);
        if(x == -1)
        {
            continue;
        }
        printf("S = %.2lf\n", face);
        printf("P = %.2lf\n", perimeter);

    }

    return 0;
}