#include <stdio.h>
void main() {
    int MonthNumber;
    printf("Enter a number between 1 and 12: ");
    scanf("%d", &MonthNumber);

    if (MonthNumber == 1) {
        printf("January\n");
    } else if (MonthNumber == 2) {
        printf("February\n");
    } else if (MonthNumber == 3) {
        printf("March\n");
    } else if (MonthNumber == 4) {
        printf("April\n");
    } else if (MonthNumber == 5) {
        printf("May\n");
    } else if (MonthNumber == 6) {
        printf("June\n");
    } else if (MonthNumber == 7) {
        printf("July\n");
    }else if (MonthNumber == 8) {
        printf("August\n");
    } else if (MonthNumber == 9) {
        printf("September\n");
    } else if (MonthNumber == 10) {
        printf("october\n");
    } else if (MonthNumber == 11) {
        printf("November\n");
    } else if (MonthNumber == 12) {
        printf("December\n");
    }  else {
        printf("Invalid input! Please enter a number between 1 and 12.\n");
    }
}

