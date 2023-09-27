//program for convert years into days and days into years

#include<stdio.h>

int main()
{
    int number_of_days, years,  days;

    /* Reading number of days from user */
    printf("Enter number of days: ");
    scanf("%d", &number_of_days);

    /* Calculating years */
    years = number_of_days / 365;

    // Calculating days
    days = (number_of_days - years * 365 );

    // Displaying results
    printf("Years = %d", years);
    printf("\nDays = %d", days);

    return 0;
}