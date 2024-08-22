#include <stdio.h>

void main() {
    int month, year;
    int days;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    int isLeapYear = 0;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        isLeapYear = 1;
    }

    switch (month) {
        case 1: // January
            days = 31;
            break;
        case 2: // February
            days = (isLeapYear) ? 29 : 28;
            break;
        case 3: // March
            days = 31;
            break;
        case 4: // April
            days = 30;
            break;
        case 5: // May
            days = 31;
            break;
        case 6: // June
            days = 30;
            break;
        case 7: // July
            days = 31;
            break;
        case 8: // August
            days = 31;
            break;
        case 9: // September
            days = 30;
            break;
        case 10: // October
            days = 31;
            break;
        case 11: // November
            days = 30;
            break;
        case 12: // December
            days = 31;
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            return 1;
    }

    printf("Number of days in month %d of year %d is: %d\n", month, year, days);
}

