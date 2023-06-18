/* 
Sum and Average Of 1D Array
*/
#include <stdio.h>
int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

float calculateAverage(int array[], int size)
 {
    int sum = calculateSum(array, size);
    float average = (float)sum / size;
    return average;
}

int main() {
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int array[n];
     for(int i=0;i<n;i++)
     {
        scanf("%d",&array[i]);
     }
        int sum = calculateSum(array, n);
    float average = calculateAverage(array,n);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
