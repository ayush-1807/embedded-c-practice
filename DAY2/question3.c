#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    // Swapping using XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping (Method 3 - XOR): a = %d, b = %d\n", a, b);

    return 0;
}
