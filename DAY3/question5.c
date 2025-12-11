// Q: Write a C program to count the number of 0's and 1's
//    in the binary representation of a given number.

#include <stdio.h>

int main() {
    int num, ones = 0, zeros = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    while (num > 0) {
        if (num % 2 == 1)
            ones++;
        else
            zeros++;
        num /= 2;
    }

    printf("1's = %d, 0's = %d", ones, zeros);
    return 0;
}
