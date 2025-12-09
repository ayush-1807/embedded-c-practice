// Write a C program to convert any decimal number (1–3000)
// into a Roman numeral. 
// Roman symbols: 1=I, 5=V, 10=X, 50=L, 100=C, 500=D, 1000=M

#include <stdio.h>

void printRoman(int num, int value, char *symbol) {
    while (num >= value) {
        printf("%s", symbol);
        num -= value;
    }
}

int main() {
    int num;

    printf("Enter a decimal number (1 to 3000): ");
    scanf("%d", &num);

    if (num < 1 || num > 3000) {
        printf("Invalid number! Enter between 1 and 3000.");
        return 0;
    }

    printf("Roman numeral: ");

    // Roman values in descending order
    printRoman(num, 1000, "M"); num %= 1000;
    printRoman(num, 900, "CM"); num %= 900;
    printRoman(num, 500, "D");  num %= 500;
    printRoman(num, 400, "CD"); num %= 400;
    printRoman(num, 100, "C");  num %= 100;
    printRoman(num, 90, "XC");  num %= 90;
    printRoman(num, 50, "L");   num %= 50;
    printRoman(num, 40, "XL");  num %= 40;
    printRoman(num, 10, "X");   num %= 10;
    printRoman(num, 9, "IX");   num %= 9;
    printRoman(num, 5, "V");    num %= 5;
    printRoman(num, 4, "IV");   num %= 4;
    printRoman(num, 1, "I");

    return 0;
}
