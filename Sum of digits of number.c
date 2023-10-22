#include <stdio.h>

int main() {
    int number, originalNumber, remainder, sum = 0;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Calculate the sum of digits
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        sum += remainder;
        originalNumber /= 10;
    }

    // Output the sum
    printf("Sum of digits of %d is: %d\n", number, sum);

    return 0;
}
