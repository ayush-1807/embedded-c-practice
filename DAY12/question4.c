// Write a C program to SET, CLEAR and TOGGLE (flip) a bit at a given position.
#include <stdio.h>

// Macros
#define bitset(byte,nbit)   ((byte) |  (1 << (nbit)))
#define bitclear(byte,nbit) ((byte) & ~(1 << (nbit)))
#define bittoggle(byte,nbit) ((byte) ^ (1 << (nbit)))   // 🔥 TOGGLE

// Display binary
void display_binary(int n){
    unsigned int cnt = 32;
    unsigned int mask = 1 << 31;
    for(; cnt > 0; cnt--){
        (n & mask) ? printf("1") : printf("0");
        mask >>= 1;
    }
    printf("\n");
}

int main(){
    int i = 255;
    int result;

    printf("Original:\n");
    display_binary(i);

    result = bitclear(i, 2);
    printf("After clearing bit 2:\n");
    display_binary(result);

    result = bittoggle(i, 2);
    printf("After toggling bit 2:\n");
    display_binary(result);

    return 0;
}
