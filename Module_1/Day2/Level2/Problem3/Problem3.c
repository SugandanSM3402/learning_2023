/*Suppose 7 names are stored in an array of pointers names[] as shown below:
 char *name[]={
        "Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"
          }
  Write a program to arrange these names in alphabetical order.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareNames(const void *a, const void *b) {
    const char **nameA = (const char **)a;
    const char **nameB = (const char **)b;
    return strcmp(*nameA, *nameB);
}

void printNames(char *names[], int size) {
    printf("\n");
    printf("Sorted Names:\n");
    for (int i = 0; i < size; i++) {
        printf("%s", names[i]);
    }
}

int main() {
    char *names[] = {
        "Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"
    };
    int size = sizeof(names) / sizeof(names[0]);

    printf("Original Names:\n");
    for (int i = 0; i < size; i++) {
        printf("%s", names[i]);
    }

    qsort(names, size, sizeof(char *), compareNames);
    printNames(names, size);

    return 0;
}

