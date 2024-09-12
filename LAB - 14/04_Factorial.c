#include <stdio.h>

void main() {
    int i=1,num,fact=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (i<=num)
    {
        fact*=i;
        i++;
    }
    printf("Factorial of %d : %d", num, fact);
}
