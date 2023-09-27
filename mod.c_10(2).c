
// program for showing Vowel or Consonant using switch case

#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Convert the character to lowercase for easier comparison
    ch = tolower(ch);

    // Check if the character is a vowel or a consonant using switch-case
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("%c is not a valid letter.\n", ch);
            }
    }

    return 0;
}
