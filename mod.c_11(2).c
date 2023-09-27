
//looping program for take 10 no. Input from user and find out …


#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0, max, min;

    printf("Enter 10 numbers, one at a time:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];

        if (i == 0 || numbers[i] > max) {
            max = numbers[i];
        }
        if (i == 0 || numbers[i] < min) {
            min = numbers[i];
        }
    }
    double average = (double)sum / 10.0;

    printf("Sum: %d\n", sum);
    printf("Average: %.2lf\n", average);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}

