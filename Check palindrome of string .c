#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];
    int i, length, isPalindrome = 1;
    
    // Input from user
    printf("Enter a string: ");
    scanf("%s", inputString);
    
    // Calculate the length of the input string
    length = strlen(inputString);
    
    // Check if the string is a palindrome
    for (i = 0; i < length / 2; ++i) {
        if (inputString[i] != inputString[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    
    // Output the result
    if (isPalindrome) {
        printf("%s is a palindrome.\n", inputString);
    } else {
        printf("%s is not a palindrome.\n", inputString);
    }
    
    return 0;
}
