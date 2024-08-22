#include <stdio.h>

void main() {
    double num1, num2, num3;
    double largest;

    // Input the three numbers
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // Determine the largest number between num1 and num2
    if (num1 > num2) {
        largest = num1;
    } else {
        largest = num2;
    }

    // Perform multiplication based on the largest number
    if (largest == num1) {
        printf("%.2lf * %.2lf = %.2lf\n", largest, num3, largest * num3);
    } else if (largest == num2) {
        printf("%.2lf * %.2lf = %.2lf\n", largest, num3, largest * num3);
    } else {
        printf("Invalid Input\n");
    }
}

