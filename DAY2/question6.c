#include <stdio.h>

int main() {
    int start, end, num, i, count = 0, flag;

    // Input the range
    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);

    // Loop through each number in the range
    for (num = start; num <= end; num++) {
        if (num <= 1) continue; // skip 0 and 1

        flag = 0; // assume number is prime

        // Check if num is divisible by any number from 2 to num-1
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                flag = 1; // not prime
                break;
            }
        }

        if (flag == 0) {
            count++; // number is prime, increase count
        }
    }

    printf("Number of prime numbers between %d and %d is: %d\n", start, end, count);

    return 0;
}
