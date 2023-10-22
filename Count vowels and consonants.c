#include <stdio.h>
#include <ctype.h>

int main() {
    char inputString[100];
    int vowels = 0, consonants = 0, i;

    // Input from user
    printf("Enter a string: ");
    scanf(" %[^\n]", inputString);  // %[^\n] allows input with spaces

    // Count vowels and consonants in the string
    for (i = 0; inputString[i] != '\0'; ++i) {
        // Check if the character is an alphabet or a space
        if (isalpha(inputString[i]) || inputString[i] == ' ') {
            // Convert character to lowercase
            char ch = tolower(inputString[i]);
            // Check if it's a vowel or consonant
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                ++vowels;
            } else if (ch != ' ') {  // Exclude spaces from consonant count
                ++consonants;
            }
        }
    }

    // Output the count of vowels and consonants
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
