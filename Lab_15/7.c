#include <stdio.h>

int main() {
    int N,i;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &N);

    // Check for valid input
    if (N <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit the program with an error code
    }

    // Print the Fibonacci series
    printf("Fibonacci Series:\n");

    // Handle the first term separately
    if (N >= 1) {
        printf("0\n");
    }

    // Handle the second term separately
    if (N >= 2) {
        printf("1\n");
    }

    // Initialize the first two terms
    int a = 0, b = 1, c;

    // Generate and print the rest of the series
    for ( i = 3; i <= N; i++) {
        c = a + b; // Calculate the next term
        printf("%d\n", c); // Print the next term
        a = b; // Move forward in the series
        b = c; // Move forward in the series
    }

    return 0;
}

