#include <stdio.h>

// Function to calculate GCD using Euclidean algorithm
int calculateGCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return calculateGCD(b, a % b);
    }
}

// Function to calculate LCM
int calculateLCM(int a, int b) {
    int gcd = calculateGCD(a, b);
    int lcm = (a * b) / gcd;
    return lcm;
}

int main() {
    int num1, num2;

    // Accept two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate and display LCM
    int lcm = calculateLCM(num1, num2);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
