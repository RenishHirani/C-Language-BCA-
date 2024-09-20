#include <stdio.h>

int main() {
    int x, y,i;
    int result = 1; // Use long long to handle large results

    // Input the base (x) and exponent (y)
    printf("Enter the base (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (y): ");
    scanf("%d", &y);

    // Check for negative exponents
    if (y < 0) {
        printf("Exponent must be a non-negative integer.\n");
        return 1; // Exit the program with an error code
    }

    // Calculate x^y
    for ( i = 1; i <= y; i++) {
        result *= x; // Multiply result by x, y times
    }

    // Print the result
    printf("%d^%d = %d\n", x, y, result);

    return 0;
}

