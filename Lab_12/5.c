#include <stdio.h>
#include <math.h> // Include the math library for sqrt function

void main() {
    int i = 0; 

    while (i <= 9) {
    	
        float squareRoot = sqrt(i);
        printf("Number: %d, Square Root: %f\n", i, squareRoot);
        i++; 
    }
}

