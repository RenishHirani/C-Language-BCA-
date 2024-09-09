#include <stdio.h>
void main() {
    int start, end;

    printf("Enter the start number: ");
    scanf("%d", &start);
    printf("Enter the end number: ");
    scanf("%d", &end);

    while (start <= end) {
        if (start % 2 != 0) {
            printf("%d\n", start);
        }
        start++;
    }

}

