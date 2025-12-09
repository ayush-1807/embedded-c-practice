// Q: Write a C program to generate electricity bill using unit slabs
//    and add 5% GST + meter rent Rs 75.

#include <stdio.h>

int main() {
    float units, bill, gst, total;

    printf("Enter units consumed: ");
    scanf("%f", &units);

    // Calculate bill based on slabs
    if (units <= 60)
        bill = units * 1.20;
    else if (units <= 100)
        bill = units * 3.10;
    else if (units <= 500)
        bill = units * 5.50;
    else
        bill = units * 9;

    gst = bill * 0.05;   // 5% GST
    total = bill + gst + 75;  // meter rent = 75

    printf("Electricity Bill = %.2f\n", total);

    return 0;
}
