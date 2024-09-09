#include <stdio.h>

void main() {
    int N, i = 1;

    printf("Enter a number N: ");
    scanf("%d", &N);

    while (i <= N) {
        if (i % 2 != 0) { 
            printf("%d\n", i); 
        }
        i++; 
    }
}

