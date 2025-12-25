// flip a bit(toggle) and etc
#include<stdio.h>

#define bitset(byte,nbit) ((byte) |= (1 << (nbit)))
#define bitclear(byte,nbit) ((byte) & ~(1 << (nbit)))

void display_binary(int n){
    unsigned int cnt =32;
    unsigned int mask = 1<<31;
    for(;cnt>0;cnt--){
        (n & mask)? printf("1"): printf("0");
        mask = mask>>1;
    }
    printf("\n");
}

int main(){
    int result ;
    int i =255;
    display_binary(i);
    result=bitclear(i,2);
    display_binary(result);
    printf("Result after clearing 2nd bit: %d\n", result);

}