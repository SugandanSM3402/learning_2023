/*Write a program to sum every alternate elements of a given array starting for element 0
For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be 10 + 30 + 50 = 90

Topics to be covered
- Arrays
- Loops
- Basic Operators
*/
#include <stdio.h>
int sum(int array[],int n)
{
    int sum = 0;
    for (int i = 0; i < n; i += 2) {
        sum += array[i];
}
return sum;
}
int main() {
    int n;
    scanf("%d",&n);
    int array[n] ;    
    for (int i = 0; i < n; i += 2) {
           scanf("%d",&array[i]);
    }
     int result = sum(array,n);
    printf("%d",result);
    printf("\n");

    return 0;
}

