#include <stdio.h>
void main() {
    int dayNumber;
    printf("Enter a number between 1 and 7: ");
    scanf("%d", &dayNumber);

    if (dayNumber == 1) {
        printf("Sunday\n");
    } else if (dayNumber == 2) {
        printf("Monday\n");
    } else if (dayNumber == 3) {
        printf("Tuesday\n");
    } else if (dayNumber == 4) {
        printf("Wednesday\n");
    } else if (dayNumber == 5) {
        printf("Thursday\n");
    } else if (dayNumber == 6) {
        printf("Friday\n");
    } else if (dayNumber == 7) {
        printf("Saturday\n");
    } else {
        printf("Invalid input! Please enter a number between 1 and 7.\n");
    }
}

