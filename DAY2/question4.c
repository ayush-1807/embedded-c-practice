#include <stdio.h>

int main() {
    int start, end, i, sum, num;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Perfect numbers in the range %d to %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        sum = 0;

        // Check factors
        for (i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }

        if (sum == num && num != 0) {
            printf("%d ", num);
        }
    }

    return 0;
}
