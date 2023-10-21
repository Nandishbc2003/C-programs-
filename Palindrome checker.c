#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0, remainder;

    // Accept a number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number; // Store the original number

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // Check if the original number is equal to its reverse
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}
