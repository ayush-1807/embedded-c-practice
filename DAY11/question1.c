// Write a C program to find the absolute value of a number using a user-defined function.

#include <stdio.h>
int abs(int num){
    if(num <0)
        return -num;
    else 
        return num;
}
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The absolute value of %d is %d\n", number, abs(number));
    return 0;
}