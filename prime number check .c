#include <stdio.h>

int main() {
    int number, i, isPrime = 1; // Assuming the number is prime initially

    // Accept a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // 0 and 1 are not prime numbers
    if (number <= 1) {
        isPrime = 0;
    } else {
        // Check if the number is divisible by any integer from 2 to number - 1
        for (i = 2; i * i <= number; ++i) {
            if (number % i == 0) {
                isPrime = 0; // If the number is divisible, it is not prime
                break;
            }
        }
    }

    // Display the result
    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
