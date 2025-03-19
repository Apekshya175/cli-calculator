#include <stdio.h>

int main() {
    double num1, num2;
    char op;

    // Taking user input
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);

    return 0;
}