/*
Min and Max of 1D Array 
{ 64 ,84 ,20 ,36 ,12 ,90 ,72 ,10 ,45 ,56}
*/
#include <stdio.h>

int findMinimum(int array[], int size) 
{
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int findMaximum(int array[], int size)
 {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int main() 
{
    int array[] = {64, 84, 20, 36, 12, 90, 72, 10, 45, 56};
    int size = sizeof(array) / sizeof(array[0]);

    int minimum = findMinimum(array, size);
    int maximum = findMaximum(array, size);

    printf("Minimum: %d\n", minimum);
    printf("Maximum: %d\n", maximum);

    return 0;
}
