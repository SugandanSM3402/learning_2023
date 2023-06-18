/*Diff between even & odd elements*/
#include <stdio.h>
int getEvenOddDifference(int array[], int size) {
    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            evenSum += array[i];
        } else {
            oddSum += array[i];
        }
    }

    return evenSum - oddSum;
}

int main() {
    int array[] = {64, 84, 20, 36, 12, 90, 72, 10, 45, 56};
    int size = sizeof(array) / sizeof(array[0]);

    int difference = getEvenOddDifference(array, size);

    printf("Difference between the sum of even and odd elements: %d\n", difference);

    return 0;
}
