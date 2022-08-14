#include<stdio.h>

int main(){

    double num1, num2, result;
    char ch1;

   
    
    while(scanf("%lf %c %lf", &num1, &ch1, &num2)!=EOF){


    if (ch1 == '+'){
        result = num1 + num2;
    }

    else if (ch1 == '-'){
        result = num1 - num2;
    }

    else if (ch1 == '*'){
        result = num1 * num2;
    }

    else if (ch1 == '/'){
        result = num1 / num2;
    }

    else{
        printf("Wrong operator!\n");
        return 1;
    }

    

    printf("%.2lf\n", result);

    }
    return 0;
}