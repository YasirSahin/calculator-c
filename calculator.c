// A simple calculator in C language. My Github: https://github.com/YasirSahin
#include <stdio.h>

int main(){

    double num1, num2;
    int process;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);
    
    printf("1- Addition\n2- Subtraction\n3- Multiplication\n4- Division\n");
    scanf("%d", &process);


    switch (process)
    {
    case 1:
        printf("%lf + %lf = %lf", num1, num2, num1 + num2);
        break;
    case 2:
        printf("%lf - %lf = %lf", num1, num2, num1 - num2);
        break;
    case 3:
        printf("%lf * %lf = %lf", num1, num2, num1 * num2);
        break;
    case 4:
        printf("%lf / %lf = %lf", num1, num2, num1 / num2);
        break;
    default:
        printf("Error");
        break;
    }

    return 0;
/*
    if (process == 1){
        printf("%lf + %lf = %lf", num1, num2, num1 + num2);
    } else if (process == 2){
        printf("%lf - %lf = %lf", num1, num2, num1 - num2);
    } else if (process == 3){
        printf("%lf x %lf = %lf", num1, num2, num1 * num2);
    } else if (process == 4){
        printf("%lf / %lf = %lf", num1, num2, num1 / num2);
    } else {
        printf("Error");
    }
*/

}
