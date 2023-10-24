#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int choice;
    printf("Select a range:\n");
    printf("1. 1 to 100\n");
    printf("2. 100 to 1000\n");
    printf("3. 1000 to 100000\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Prime numbers between 1 and 100:\n");
            for (int i = 1; i <= 100; ++i) {
                if (isPrime(i)) {
                    printf("%d ", i);
                }
            }
            break;
        case 2:
            printf("Prime numbers between 100 and 1000:\n");
            for (int i = 100; i <= 1000; ++i) {
                if (isPrime(i)) {
                    printf("%d ", i);
                }
            }
            break;
        case 3:
            printf("Prime numbers between 1000 and 100000:\n");
            for (int i = 1000; i <= 100000; ++i) {
                if (isPrime(i)) {
                    printf("%d ", i);
                }
            }
            break;
        default:
            printf("Invalid choice! Please choose a valid option.");
    }

    printf("\n");
    return 0;
}
