#include <stdio.h>

struct Register {
    int error_flag   : 1;
    int warning_flag : 1;
    int mode         : 2;
    int command      : 4;
    int data_ready   : 1;
    int checksum     : 7;
};
int main() {
    unsigned int value;
    struct Register reg;
    printf("Enter 16-bit value (0 to 65535): ");
    scanf("%u", &value);
    reg = *(struct Register *)&value;
    printf("\nDecoded Register Fields:\n");
    printf("Error Flag   : %u\n", reg.error_flag);
    printf("Warning Flag : %u\n", reg.warning_flag);
    printf("Mode         : %u\n", reg.mode);
    printf("Command      : %u\n", reg.command);
    printf("Data Ready   : %u\n", reg.data_ready);
    printf("Checksum     : %u\n", reg.checksum);
    return 0;
}