// Q: Write a C program to generate the largest possible number
//    using the digits of a number entered by the user.

#include <stdio.h>

int main() {
    int num, digit;
    int count[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    printf("Largest number = ");
    for (int i = 9; i >= 0; i--)
        while (count[i]--)
            printf("%d", i);

    return 0;
}
