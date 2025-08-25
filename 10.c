// simple calculator
#include <stdio.h>

int main(){
    float num1,num2;
    char operator;

    printf("Enter first number:");
    scanf("%f", &num1);
    printf("Enter second number:");
    scanf("%f", &num2);

    printf("Enter Operator(+ - * /):");
    scanf(" %c",&operator);

    if (operator == '+'){
        printf("Result: %f",num1 + num2 );
    }
    else if (operator == '-'){
        printf("Result: %f",num1 - num2 );
    }
    else if (operator == '*'){
        printf("Result: %f",num1 * num2 );
    }
    else if (operator == '/'){
        if (num2 != 0)
            printf("Result: %f\n", num1 / num2);
        else
            printf("Error: Division by zero!\n");

    }
    else{
        printf("Invalid Opeartor!" );
    }
    return 0;
}