#include <stdio.h>

int main() {
    double num1, num2, temp;
    
    // Input from user
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    // Swapping using a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    // Output after swapping
    printf("After swapping:\n");
    printf("First number: %.2lf\n", num1);
    printf("Second number: %.2lf\n", num2);
    
    return 0;
}
