/* Write a program to find both smallest and largest digits in given n numbers
For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, the result will be "Not Valid", 1 and 6, 0 and 5*/#include <stdio.h>
#include<stdio.h>
#include<string.h>
#include<limits.h>
void Find_big_small(int number)
{
    int n1=number;
    int big=INT_MIN;
    int small=INT_MAX;
    while(number!=0)
    {
        int rem = number%10;
        if(big<rem)
        {
            big=rem;
        }

        if(rem<small)
        {
            small=rem;
        }
        number=number/10;
    }


    if(big != small)
    {
        printf("Smallest digit : %d\n",small);
        printf("Biggest digit : %d\n",big);
    }
    else
    {
        printf("The result will be invalid.");
    }
}


int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    Find_big_small(number);
    return 0;
}


