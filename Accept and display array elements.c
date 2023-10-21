#include <stdio.h>

int main() {
    int array[10]; // Declare an array of size 10
    int i;

    // Accept 10 elements from the user
    printf("Enter 10 array elements:\n");
    for(i = 0; i < 10; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Display the elements
    printf("Entered array elements are: ");
    for(i = 0; i < 10; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
