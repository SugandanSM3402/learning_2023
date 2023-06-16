/*Find the largest number by deleting single digit in a 4 digit number 5872 - 872, 9856 - 986

Concepts to be used.
- Loops
- Operators */
int findLargestNumber(int num) {
    int largestNumber = 0;
    int divisor = 1000;

    while (divisor >= 1) {
        int tempNum = (num / (divisor * 10)) * divisor + (num % divisor);
        if (tempNum > largestNumber) {
            largestNumber = tempNum;
        }
        divisor /= 10;
    }

    return largestNumber;
}
#include <stdio.h>
int main() 
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    int largestNumber = findLargestNumber(num);

    printf("Largest number : %d\n", largestNumber);

    return 0;
}
