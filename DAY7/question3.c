// Q: Write a C program to find the interpolated value using array method.
//    If input is below range, print minimum value.
//    If input is above range, print maximum value.

#include <stdio.h>

int main() {
    int x[10] = {15,30,45,60,75,90,105,120,135,150};
    float y[10] = {4.8,5.6,7.2,8.9,9.8,10.5,11.7,12.8,13.2,13.6};

    float xin, yout;
    int i;

    printf("Enter value of x: ");
    scanf("%f", &xin);

    // If below minimum range
    if (xin <= x[0]) {
        yout = y[0];
    }
    // If above maximum range
    else if (xin >= x[9]) {
        yout = y[9];
    }
    // Interpolation
    else {
        for (i = 0; i < 9; i++) {
            if (xin >= x[i] && xin <= x[i+1]) {
                yout = y[i] + ( (xin - x[i]) * (y[i+1] - y[i]) ) 
                       / (x[i+1] - x[i]);
                break;
            }
        }
    }

    printf("Interpolated value = %.2f", yout);

    return 0;
}
