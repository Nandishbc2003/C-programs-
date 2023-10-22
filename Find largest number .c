#include <stdio.h>

int main() {
    double num1, num2, num3, num4, largest;
    
    // Input from user
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Enter third number: ");
    scanf("%lf", &num3);
    printf("Enter fourth number: ");
    scanf("%lf", &num4);
    
    // Assume num1 is the largest initially
    largest = num1;
    
    // Check if num2 is larger than the current largest
    if (num2 > largest) {
        largest = num2;
    }
    
    // Check if num3 is larger than the current largest
    if (num3 > largest) {
        largest = num3;
    }
    
    // Check if num4 is larger than the current largest
    if (num4 > largest) {
        largest = num4;
    }
    
    // Output the largest number
    printf("The largest number is: %.2lf\n", largest);
    
    return 0;
}
