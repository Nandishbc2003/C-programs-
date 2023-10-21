#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int array[10];
    int i, choice;

    // Accept 10 elements from the user
    printf("Enter 10 array elements:\n");
    for (i = 0; i < 10; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Display options to the user
    printf("Choose an option:\n");
    printf("1. Reverse Half\n");
    printf("2. Reverse Full\n");
    printf("3. Reverse 80%%\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Reverse half of the array
            reverseArray(array, 0, 4);
            break;
        case 2:
            // Reverse the entire array
            reverseArray(array, 0, 9);
            break;
        case 3:
            // Reverse 80% of the array (first 8 elements)
            reverseArray(array, 0, 7);
            break;
        default:
            printf("Invalid choice\n");
            return 1;
    }

    // Display the reversed array
    printf("Reversed Array: ");
    for (i = 0; i < 10; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
