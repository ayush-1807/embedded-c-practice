// ❓ Question: Write a C program to check whether a given number is a palindrome.
// A number is palindrome if it remains the same when reversed.  
// Example: 121 → Palindrome, 123 → Not Palindrome

#include <stdio.h>

int main() {
    int num, rev = 0, rem, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (original == rev)
        printf("Palindrome number");
    else
        printf("Not a palindrome");

    return 0;
}
