#include <stdio.h>

int main() {
    int n,i;
    int factorial = 1; // Use long long to handle large factorials

    // Input the number
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Check for non-negative integer
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; // Exit the program with an error code
    }

    // Calculate factorial using a for loop
    for ( i = 1; i <= n; i++) {
        factorial *= i; // Multiply factorial by i
    }

    // Print the result
    printf("Factorial of %d is %d\n", n, factorial);

    return 0;
}

