#include <stdio.h>

int main() {
	int i;
    printf("ASCII Characters and Their Values:\n");
    for ( i = 0; i < 128; i++) { // ASCII range from 0 to 127
        printf("Value: %3d  Character: %c\n", i, i);
    }

    return 0;
}

