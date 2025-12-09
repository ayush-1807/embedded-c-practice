// Write a C program to convert a decimal number into 
// its Octal and Hexadecimal form WITHOUT using %o and %x.
#include <stdio.h>

int main() {
    int num, temp, i;
    int oct[50], hex[50];

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    temp = num;

    // ------------------ Decimal to Octal ------------------
    i = 0;
    while (temp > 0) {
        oct[i] = temp % 8;
        temp = temp / 8;
        i++;
    }

    printf("Octal of %d = ", num);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", oct[j]);
    }

    // ------------------ Decimal to Hexadecimal ------------------
    temp = num;
    i = 0;
    while (temp > 0) {
        int rem = temp % 16;

        if (rem < 10)
            hex[i] = rem + '0';        // convert number to character
        else
            hex[i] = rem - 10 + 'A';   // convert 10→A, 11→B, 12→C...

        temp = temp / 16;
        i++;
    }

    printf("\nHexadecimal of %d = ", num);
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }

    return 0;
}
