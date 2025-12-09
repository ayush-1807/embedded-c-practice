// Q: Write a C program to print numbers from 1 to N.
//    If a number is divisible by 3 OR contains digit 3, print "Clap".

#include <stdio.h>

int main() {
    int n, i, temp;

    printf("Enter count N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        
        // Check if number contains digit 3
        temp = i;
        int has3 = 0;
        while (temp > 0) {
            if (temp % 10 == 3) {
                has3 = 1;
                break;
            }
            temp /= 10;
        }

        if (i % 3 == 0 || has3 == 1)
            printf("Clap\n");
        else
            printf("%d\n", i);
    }

    return 0;
}
