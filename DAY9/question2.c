// Q: Write a C program to find the size of a union
//    containing int, float, double and char array[20]

#include <stdio.h>

union Data {
    int i;
    float f;
    double d;
    char ch[20];
};

int main() {
    union Data u;

    printf("Size of union = %lu bytes\n", sizeof(u));

    return 0;
}
