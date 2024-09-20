#include <stdio.h>

int main() {
    int number,i;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check for non-positive numbers
    if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit the program with an error code
    }

    // Print factors of the given number
    printf("Factors of %d are:\n", number);
    for ( i = 1; i <= number; i++) {
        if (number % i == 0) { // Check if i is a factor
            printf("%d\n", i);
        }
    }

    return 0;
}

