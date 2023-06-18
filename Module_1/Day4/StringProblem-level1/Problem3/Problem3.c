/*Compute Total Seconds
Input String: hh,mm,ss
Total Seconds"10:12:50"
10, 12, 50
10*3600+12*60+50"
Use strtok & strtoul to split "hh:mm:ss" as hh, mm, ss
Given time in string format as hh:mm:ss, compute total seconds
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Split_time(char time[]);

int main()
{
    char time[100];
    printf("Enter the Time with ':' : ");
    scanf("%s", time);

    int result = Split_time(time);
    printf("\nThe sum of Time : %d\n", result);

    return 0;
}

int Split_time(char time[])
{
    char* token;
    unsigned long hour, minute, second;

    token = strtok(time, ":");
    hour = strtoul(token, NULL, 10);

    token = strtok(NULL, ":");
    minute = strtoul(token, NULL, 10);

    token = strtok(NULL, ":");
    second = strtoul(token, NULL, 10);

    printf("Splitted Time hh,mm,ss : %02lu:%02lu:%02lu\n", hour, minute, second);

    int totalSeconds = (int)(hour * 3600 + minute * 60 + second);

    return totalSeconds;
}
