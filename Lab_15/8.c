#include <stdio.h>

int main() {
    int number;
    int digit;
    int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    int count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Count the frequency of each digit
	for (;number > 0;number /= 10) {
        digit = number % 10; // Get the last digit

        // Increment the corresponding digit counter
        if (digit == 0) count0++;
        else if (digit == 1) count1++;
        else if (digit == 2) count2++;
        else if (digit == 3) count3++;
        else if (digit == 4) count4++;
        else if (digit == 5) count5++;
        else if (digit == 6) count6++;
        else if (digit == 7) count7++;
        else if (digit == 8) count8++;
        else if (digit == 9) count9++;
    }

    // Print the frequency of each digit
    printf("Digit Frequencies:\n");
    if (count0 > 0) printf("Digit 0: %d times\n", count0);
    if (count1 > 0) printf("Digit 1: %d times\n", count1);
    if (count2 > 0) printf("Digit 2: %d times\n", count2);
    if (count3 > 0) printf("Digit 3: %d times\n", count3);
    if (count4 > 0) printf("Digit 4: %d times\n", count4);
    if (count5 > 0) printf("Digit 5: %d times\n", count5);
    if (count6 > 0) printf("Digit 6: %d times\n", count6);
    if (count7 > 0) printf("Digit 7: %d times\n", count7);
    if (count8 > 0) printf("Digit 8: %d times\n", count8);
    if (count9 > 0) printf("Digit 9: %d times\n", count9);

    return 0;
}

