#include <stdio.h>

int main() {
    double num1, num2;
    
    // Input from user
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    // Addition
    printf("Sum: %.2lf\n", num1 + num2);
    
    // Subtraction
    printf("Difference: %.2lf\n", num1 - num2);
    
    // Multiplication
    printf("Product: %.2lf\n", num1 * num2);
    
    // Division
    if (num2 != 0) {
        printf("Quotient: %.2lf\n", num1 / num2);
    } else {
        printf("Cannot divide by zero.\n");
    }
    
    return 0;
}
