#include <stdio.h>

void main() {
    int a, b, c;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    int largest = (a >= b) 
	? ((a >= c) ? a : c) 
	: ((b >= c) ? b : c);

    printf("The largest number is %d.\n", largest);
}

