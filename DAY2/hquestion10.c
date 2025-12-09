// Q: Write a C program to display an EMI table using user inputs:
//    principal amount, rate of interest, and time in months.
//    Show: Month number, Interest paid, Principal paid.

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, monthlyRate, EMI, interest, principalPaid;
    int months;

    printf("Enter principal: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (per year): ");
    scanf("%f", &rate);

    printf("Enter time duration in months: ");
    scanf("%d", &months);

    monthlyRate = rate / (12 * 100);

    EMI = (principal * monthlyRate * pow(1 + monthlyRate, months)) /
          (pow(1 + monthlyRate, months) - 1);

    printf("\nMonth\tInterest\tPrincipal Paid\n");

    for (int i = 1; i <= months; i++) {
        interest = principal * monthlyRate;
        principalPaid = EMI - interest;
        principal -= principalPaid;

        printf("%d\t%.2f\t\t%.2f\n", i, interest, principalPaid);
    }

    return 0;
}
