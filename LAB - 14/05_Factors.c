#include <stdio.h>

void main() {
    int i=1,num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (i<=num)
    {
        if (num%i==0)
        {
            printf("%d ",i);
        }
       i++; 
    }
}
