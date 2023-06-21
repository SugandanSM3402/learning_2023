/*
Write a program using structures to calculate the difference between two time periods using a user-defined function.
*/
#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};


struct Time calculateTimeDifference(struct Time t1, struct Time t2) {
    struct Time diff;
    
    int time1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int time2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
     
      int difference = time1 - time2;
    
     diff.hours = difference / 3600;
    difference = difference % 3600;
    diff.minutes = difference / 60;
    diff.seconds = difference % 60;
    
    return diff;
}

int main() {
    struct Time t1, t2, diff;
    
    printf("Enter the first time period (hours minutes seconds): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
    
    printf("Enter the second time period (hours minutes seconds): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);
    
    diff = calculateTimeDifference(t1, t2);
    
    printf("The difference is: %02d:%02d:%02d\n", diff.hours, diff.minutes, diff.seconds);
    
    return 0;
}
