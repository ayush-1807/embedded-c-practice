// Write a C program to implement GET and SET functions for an array.
// GET function should return the value at a given position.
// SET function should set a value at a given position.
#include <stdio.h>

// SET function: put value at given position
void set(int arr[], int pos, int value) {
    arr[pos] = value;
}

// GET function: return value from given position
int get(int arr[], int pos) {
    return arr[pos];
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int position, value;

    // SET operation
    printf("Enter position to set (0-4) and value: ");
    scanf("%d %d", &position, &value);
    set(arr, position, value);

    // GET operation
    printf("Enter position to get value (0-4): ");
    scanf("%d", &position);
    printf("Value at position %d = %d", position, get(arr, position));

    return 0;
}
