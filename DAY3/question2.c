// Q: Write a C program to find the greatest of 3 numbers using the ternary operator.

#include <stdio.h>

int main() {
    int a, b, c, big;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    big = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    printf("Greatest = %d", big);
    return 0;
}
