#include <stdio.h>

int main() {
    int i = 1; 

    while (i <= 10) {
        int square = i * i;
        printf("Number: %d, Square: %d\n", i, square);
        
        i++;
    }
}

