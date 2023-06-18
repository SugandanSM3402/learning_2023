/*Diff between even & odd indexed elements {64, 84, 20, 36, 12, 90, 72, 10, 45, 56} */

#include <stdio.h>
int getEven_Sum(int array[], int size) {
    int evenSum = 0;
    for (int i = 0; i < size; i += 2) {
        evenSum += array[i];
    }
    return evenSum;
}

int getOdd_Sum(int array[], int size) {
    int oddSum = 0;
    for (int i = 1; i < size; i += 2) {
        oddSum += array[i];
    }
    return oddSum;
}

int main() {
    int array[] = {64, 84, 20, 36, 12, 90, 72, 10, 45, 56};
    int size = sizeof(array) / sizeof(array[0]);

    int evenSum = getEven_Sum(array, size);
    int oddSum = getOdd_Sum(array, size);

    int difference = evenSum - oddSum;

    printf("Difference between the sum of even-indexed and odd-indexed elements: %d\n", difference);

    return 0;
}

