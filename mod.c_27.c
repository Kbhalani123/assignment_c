//program of string and check that the string is palindrome or not

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
int start = 0;
int end = strlen(str) - 1;

while (start < end) {
if (str[start] != str[end]) {
return 0; // Not a palindrome
}

start++;
end--;
}

return 1; // Palindrome
}

int main() {
  char str[100];
   printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);

    // Remove trailing newline character
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
    printf("The string is a palindrome.\n");
    } else {
           printf("The string is not a palindrome.\n");
    }

    return 0;
}