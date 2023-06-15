/*4. Write a program to find total number of bits set in a given array.
Say we have a array of 3 elements
a[3] = {0x1, 0xF4, 0x10001};
The total number of set bits in the given array is
1 bit in 0x01, 5 in 0xF4, 2 in 0x10001, so the total is 1 + 5 + 2 = 8 bits
*/
#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%x", &arr[i]);
    }

    int totalSetBits = 0;
    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(arr[i]);
    }

    printf("Total number of set bits  %d\n", totalSetBits);

    return 0;
}
/*
countSetBit
num: 5 => iteration 1:
      0 0 0 0 0 1 0 1      count=0
      0 0 0 0 0 0 0 1      count= count+(num&1)
      ---------------
      0 0 0 0 0 0 0 1      count=1
      ---------------

          num>>=1    rightshift the num 
     0 0 0 0 0 0 1 0 => 2 [new num]
      iteration2:
     0 0 0 0 0 0 1 0     [AND operation]
     0 0 0 0 0 0 0 1
     ---------------
     0 0 0 0 0 0 0 0     count=(1+0) =1
     ----------------
           num>>1
     0 0 0 0 0 0 0 1 => 1 [new num]
     iteration 3:
     0 0 0 0 0 0 0 1
     0 0 0 0 0 0 0 1
     ---------------
     0 0 0 0 0 0 0 1 count = (1+1)= 2
     ---------------      
    num>>1
    0 0 0 0 0 0 0 0 [new num]
    hence loop terminate num==0




*/