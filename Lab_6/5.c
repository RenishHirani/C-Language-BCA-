#include <stdio.h>

void main() {
    int days;
    int years, weeks, remainingDays;

    // Input number of days
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Calculate years, weeks, and remaining days
    years = days / 365;
    remainingDays = days % 365;
    weeks = remainingDays / 7;
    remainingDays = remainingDays % 7;

    // Print the converted result
    printf("%d days = %d year(s), %d week(s), and %d day(s)\n", days, years, weeks, remainingDays);

}

