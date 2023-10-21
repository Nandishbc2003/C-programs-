#include <stdio.h>

int main() {
    float num1, num2, result;
    
    // Accept two numbers from the user
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    // Multiply the numbers
    result = num1 * num2;
    
    // Determine the sign of the result
    if (result > 0) {
        printf("The product of %.2f and %.2f is %.2f and it is positive.\n", num1, num2, result);
    } else if (result < 0) {
        printf("The product of %.2f and %.2f is %.2f and it is negative.\n", num1, num2, result);
    } else {
        printf("The product of %.2f and %.2f is %.2f and it is zero.\n", num1, num2, result);
    }
    
    return 0;
}
