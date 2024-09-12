#include <stdio.h>

void main()
{
    int i = 1, n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d : %d\n", i, i * i);
        sum = sum + (i * i);
        i++;
    }
    printf("Sum of All Square Number is : %d", sum);
}
