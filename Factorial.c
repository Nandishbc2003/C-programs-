#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1; // Factorial can become very large, so use unsigned long long data type

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Show error if the user enters a negative integer
    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", number, factorial);
    }

    return 0;
}
