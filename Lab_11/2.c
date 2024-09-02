#include <stdio.h>

void main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    char result;
	result = (number >= 0) 
	? printf("The Number Is Positive Or Zero") 
	: printf("The Number Is Negative");

    printf("%c\n", result);
}

