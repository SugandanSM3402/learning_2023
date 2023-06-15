/*
1. Write a program to print exponent part of double variable in hexadecimal and binary format.
lets say we have x = 0.7, the exponent in hex is 0x3FE and 0b01111111110
You may use the below link to validate you output
https://baseconvert.com/ieee-754-floating-point

Topics to be covered
- Pointers
- Bitwise Operators
*/
#include <stdio.h>
#include <stdint.h>

void printExponentParts(double num) {
    uint64_t* ptr = (uint64_t*)&num;
    uint64_t bits = *ptr;
    uint64_t exponent = (bits >> 52) & 0x7FF;

    
    printf("Hexadecimal exponent: 0x%llx\n", exponent);

    printf("Binary exponent: 0b");
    for (int i = 11; i >= 0; i--) {
        uint64_t bit = (exponent >> i) & 1;
        printf("%lld", bit);
    }
    printf("\n");
}

int main() {
    double num = 0.7;
    printExponentParts(num);

    return 0;
}
