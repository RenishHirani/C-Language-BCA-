#include <stdio.h>
//#include <math.h>
void main() {
    float side1, side2, side3;
    float largest_side, sum_of_squares;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 >= side2 && side1 >= side3) {
        largest_side = side1;
        sum_of_squares = side2 * side2 + side3 * side3;
    } else if (side2 >= side1 && side2 >= side3) {
        largest_side = side2;
        sum_of_squares = side1 * side1 + side3 * side3;
    } else {
        largest_side = side3;
        sum_of_squares = side1 * side1 + side2 * side2;
    }

    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Invalid sides. Triangle sides should be positive.\n");
    } else if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        printf("Invalid triangle. Sum of any two sides must be greater than the third side.\n");
    } else if (side1 == side2 && side2 == side3) {
        printf("Triangle is an Equilateral triangle.\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Triangle is an Isosceles triangle.\n");
    } else if (largest_side * largest_side == sum_of_squares) {
        printf("Triangle is a Right-angled triangle.\n");
    } else {
        printf("Triangle is a Scalene triangle.\n");
    }
}

