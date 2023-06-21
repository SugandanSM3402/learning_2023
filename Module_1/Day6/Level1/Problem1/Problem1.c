/*Assume User will be providing input in the form of a string as show below. 
Write a function to parse the string and initialize an array of structures. 

Example String : "1001 Aron 100.00" 
Example Structure : 
    struct Student{
        int rollno;
        char name[20];
        float marks;
    };
Note: User must be able define the no. of inputs/size of the array during runtime.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseInputString(const char* input, struct Student* students, int size) {
    char* token = strtok(input, " ");

    for (int i = 0; i < size; i++) {
        students[i].rollno = atoi(token);

        token = strtok(NULL, " ");
        strncpy(students[i].name, token, sizeof(students[i].name));

        token = strtok(NULL, " ");
        students[i].marks = atof(token);

        token = strtok(NULL, " ");
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar(); 

    struct Student* students = malloc(size * sizeof(struct Student)); 

    printf("Enter the student details:\n");
    for (int i = 0; i < size; i++) {
        char input[100];
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0'; 

        parseInputString(input, &students[i], 1);
    }

    printf("\nStudent Data:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d: Roll No: %d, Name: %s, Marks: %.2f\n", i + 1, students[i].rollno, students[i].name, students[i].marks);
    }

    free(students); 

    return 0;
}
