// ❓ Question: Write a C program to print the Fibonacci series up to N terms.
// Example: 0 1 1 2 3 5 8 ...

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Enter how many terms: ");
    scanf("%d", &n);

    printf("%d %d ", a, b);

    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}
