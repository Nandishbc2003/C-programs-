#include <stdio.h>

// Function to calculate GCD using Euclidean algorithm
int calculateGCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return calculateGCD(b, a % b);
    }
}

int main() {
    int num1, num2;

    // Accept two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate and display GCD (HCF)
    int gcd = calculateGCD(num1, num2);
    printf("GCD (HCF) of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}
