#include <stdio.h>

int main() {
    int n, firstTerm = 0, secondTerm = 1, nextTerm;

    // Accept the number up to which Fibonacci series should be generated
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d: ", n);

    // Generate and print the Fibonacci series up to the specified number
    while (firstTerm <= n) {
        printf("%d, ", firstTerm);
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    printf("\n");

    return 0;
}
