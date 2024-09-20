#include <stdio.h>

int main() {
    int N, sum = 0,i=1;

    printf("Enter a number N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        sum += i; 
    }

    printf("The sum of numbers from 1 to %d is %d.\n", N, sum);

    return 0;
}

