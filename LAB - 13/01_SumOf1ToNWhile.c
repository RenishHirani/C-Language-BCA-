#include <stdio.h>

void main()
{
    int num, i = 1, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (i <= num)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum of first %d natural numbers is %d", num, sum);
}
