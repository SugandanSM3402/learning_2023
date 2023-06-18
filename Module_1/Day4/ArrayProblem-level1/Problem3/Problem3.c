/*
Reverse the Array {64 84 20 36 12 90 72 10 45 56 }
*/
#include <stdio.h>

// Function to reverse the array
void reverseArray(int arr[], int size) {
    printf("Reversed Array: ");
    for(int i=size-1;i>=0;i--)
    {
       printf("%d ", arr[i]);
    }
    printf("\n"); 
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 84, 20, 36, 12, 90, 72, 10, 45, 56};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    printArray(arr, size);

    reverseArray(arr, size);

   
       return 0;
}
