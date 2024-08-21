#include <stdio.h>
void main() {
    float unit, total_bill,total_amount,Gst;

    printf("Enter the total units consumed: ");
    scanf("%f", &unit);

    if (unit <= 50) {
        total_bill = unit * 0.50;
    } else if (unit <= 150) {
        total_bill = 50 * 0.50 + (unit - 50) * 0.75;
    } else if (unit <= 250) {
        total_bill = 50 * 0.50 + 100 * 0.75 + (unit - 150) * 1.20;
    } else {
        total_bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit - 250) * 1.50;
    }

	Gst = total_bill*0.2;
    total_amount = total_bill + Gst;

    printf("Total electricity bill including surcharge: Rs. %.2f\n", total_amount);
}

