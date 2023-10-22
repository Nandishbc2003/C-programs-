#include <stdio.h>

int main() {
    char letter;

    // Input from user
    printf("Enter a letter: ");
    scanf(" %c", &letter);

    // Convert to lowercase (if it's an uppercase letter)
    if (letter >= 'A' && letter <= 'Z') {
        letter = letter + ('a' - 'A');
    }

    // Check if the letter is a vowel or consonant
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
        printf("%c is a vowel.\n", letter);
    } else {
        printf("%c is a consonant.\n", letter);
    }

    return 0;
}
