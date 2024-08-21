#include <stdio.h>

int main() {
    int a;
    printf("Enter a Number : ");
    scanf("%d", &a);
    if(a<0)
    {
        printf("Number is Negative");
    }
    else if(a==0)
    {
        printf("Number is Zero");
    }
    else
    {
        printf("Number is Positive");
    }
    return 0;
}