#include <stdio.h>

int main() {
    int array[10]; // Declare an array of size 10
    int sum = 0, product = 1; // Variables for sum and product
    int i;

    // Accept 10 elements from the user
    printf("Enter 10 array elements:\n");
    for(i = 0; i < 10; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);

        // Calculate sum and product while accepting elements
        sum += array[i];
        product *= array[i];
    }

    // Display the sum, product, and combined value
    printf("Sum of elements: %d\n", sum);
    printf("Product of elements: %d\n", product);
    printf("Combined value (sum + product): %d\n", sum + product);

    return 0;
}
