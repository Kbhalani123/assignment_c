//Program for print factorial of given number

#include <stdio.h>

int main() {
    int n;
     int factorial = 1;

    // Input a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if n is a non-negative integer
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using a loop
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        // Print the result
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
