/*
Write a function to sort the array of structures in descending order based on marks 
*/
#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

void sort_structures_by_marks(struct Student structures[], int size) {
    int i, j;
    struct Student temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (structures[j].marks < structures[j + 1].marks) {
                temp = structures[j];
                structures[j] = structures[j + 1];
                structures[j + 1] = temp;
            }
        }
    }
}

int main() {
    int i, size;

    printf("Enter the number of students: ");
    scanf("%d", &size);

    struct Student structures[size];

    for (i = 0; i < size; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", structures[i].name);

        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &structures[i].marks);
    }

    sort_structures_by_marks(structures, size);

    printf("\n%-20s %s\n", "Name", "Marks");
    printf("-------------------------------\n");
    for (i = 0; i < size; i++) {
        printf("%-20s %d\n", structures[i].name, structures[i].marks);
    }
     printf("-------------------------------\n");
    return 0;
}
