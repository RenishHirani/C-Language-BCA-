#include <stdio.h>

void main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    char result;
	result = (number%2 == 0) 
	? printf("The Number Is Even") 
	: printf("The Number Is Odd");

    printf("%c\n", result);
}

