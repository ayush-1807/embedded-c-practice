// Q: Write a C program to take any number and bit position from the user.
//    Print TRUE if the bit is 1, otherwise print FALSE.

#include <stdio.h>

int main() {
    int num, pos;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter bit position (0-31): ");
    scanf("%d", &pos);

    // Masking: Check if bit is 1 or 0
    if (num & (1 << pos))
        printf("TRUE (bit is 1)");
    else
        printf("FALSE (bit is 0)");

    return 0;
}
