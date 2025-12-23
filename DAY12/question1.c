// convert a decimal number to binary number without using airthmetic operators,using ternary operator
#include<stdio.h>
#include<stdlib.h>

void dectobinary(unsigned int i){
    unsigned int cnt = 32;
    unsigned int n = 1<<31;
    
    for (; cnt>0;cnt--){
        (i & n) ? printf("1") : printf("0");
    
        n=n>>1;
    }
}

 int main() {
        unsigned int i = 45;
        dectobinary(i);
       
    

}

