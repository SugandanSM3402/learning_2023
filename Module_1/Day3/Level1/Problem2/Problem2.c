/*Scan a 32bit integer and prints its bits.

Concepts to be used.
- Loops
- Bitwise Operators*/
#include <stdio.h>
void printBits(int num) {
    int i;

    for (i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }

    printf("\n");
}



int main() {
    int num;

    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    printf("Bits of %d: ", num);
    printBits(num);

    return 0;
}


