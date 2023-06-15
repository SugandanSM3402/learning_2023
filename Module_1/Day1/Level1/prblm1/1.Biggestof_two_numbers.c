#include <stdio.h>
int findLargestNumber(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int number1, number2;
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);
    int largest = findLargestNumber(num1, num2);
    printf("The largest number is: %d\n", largest);

    return 0;
}
