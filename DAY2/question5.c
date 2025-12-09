#include <stdio.h>

int main() {
    int start, end, num, i, count = 0, flag;

    // Input the range
    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: ", start, end);

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
            printf("%d ", num); // print prime number
            count++;            // increase prime count
        }
    }

    printf("\nTotal prime numbers in the range: %d\n", count);

    return 0;
}
#include <stdio.h>

int main() 
{
    int a=0;
    while(a > 5)
    a++;
    printf("%d", a);
}