// Q: Write a C program to collect sensor data based on resolution
//    using union inside structure. Available resolutions are
//    8-bit, 12-bit, 24-bit and 28-bit.
#include <stdio.h>

/* Union to store sensor data of different resolutions */
union SensorValue {
    unsigned char  data8;    // 8-bit
    unsigned short data12;   // 12-bit (stored in 16-bit)
    unsigned int   data24;   // 24-bit
    unsigned int   data28;   // 28-bit
};

/* Structure containing resolution and union */
struct Sensor {
    int resolution;
    union SensorValue value;
};

int main() {
    struct Sensor s;

    printf("Enter resolution (8 / 12 / 24 / 28): ");
    scanf("%d", &s.resolution);

    if (s.resolution == 8) {
        printf("Enter 8-bit data: ");
        scanf("%hhu", &s.value.data8);
        printf("Sensor Data = %u\n", s.value.data8);
    }
    else if (s.resolution == 12) {
        printf("Enter 12-bit data: ");
        scanf("%hu", &s.value.data12);
        printf("Sensor Data = %u\n", s.value.data12);
    }
    else if (s.resolution == 24) {
        printf("Enter 24-bit data: ");
        scanf("%u", &s.value.data24);
        printf("Sensor Data = %u\n", s.value.data24);
    }
    else if (s.resolution == 28) {
        printf("Enter 28-bit data: ");
        scanf("%u", &s.value.data28);
        printf("Sensor Data = %u\n", s.value.data28);
    }
    else {
        printf("Invalid resolution\n");
    }

    return 0;
}
