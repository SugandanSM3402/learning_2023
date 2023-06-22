/*
Write a function to perform a search operation on the array of structures based on name of the student
*/
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int marks;
} Student;

void search_by_name(Student structures[], int size, const char* search_name) {
    int i, found = 0;

    for (i = 0; i < size; i++) {
        if (strcmp(structures[i].name, search_name) == 0) {
            printf("Name: %s , Marks: %d\n", structures[i].name, structures[i].marks);
            found = 1;
        }
    }

    if (!found) {
        printf("No student with the name '%s' found.\n", search_name);
    }
}

int main() {
    int i, size;

    printf("Enter the number of students: ");
    scanf("%d", &size);

    Student structures[size];

    for (i = 0; i < size; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", structures[i].name);

        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &structures[i].marks);
    }

    char search_name[50];
    printf("Enter the name to search: ");
    scanf("%s ", search_name);

    search_by_name(structures, size, search_name);

    return 0;
}
