// Q: Write a C program to calculate compound interest using
//    user input: principal, rate of interest, and time in months.

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, timeMonths, timeYears, amount, CI;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time duration in months: ");
    scanf("%f", &timeMonths);

    timeYears = timeMonths / 12.0;  // convert months to years

    amount = principal * pow((1 + rate/100), timeYears);
    CI = amount - principal;

    printf("Compound Interest = %.2f\n", CI);
    printf("Total Amount after interest = %.2f\n", amount);

    return 0;
}
