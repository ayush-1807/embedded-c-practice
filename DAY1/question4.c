// ❓ Question: Write a C program to print a right-aligned star pattern.
// For n = 3, the output should be:
//   * 
//  * * 
// * * *

#include <stdio.h>

int main() {
    int i, j, s, n = 3;

    for (i = 1; i <= n; i++) {
        for (s = 1; s <= n - i; s++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
