/**/
#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

void swapStudents(struct Student *s1, struct Student *s2) {
    
    char tempName[50];
    strcpy(tempName, s1->name);
    strcpy(s1->name, s2->name);
    strcpy(s2->name, tempName);
    
   
    int tempAge = s1->age;
    s1->age = s2->age;
    s2->age = tempAge;
    

    float tempMarks = s1->marks;
    s1->marks = s2->marks;
    s2->marks = tempMarks;
}

int main() {
    struct Student student1 = {"John", 20, 85.5};
    struct Student student2 = {"Alice", 19, 90.0};
    
    printf("Before swapping:\n");
    printf("Student 1: Name=%s, Age=%d, Marks=%.2f\n", student1.name, student1.age, student1.marks);
    printf("Student 2: Name=%s, Age=%d, Marks=%.2f\n", student2.name, student2.age, student2.marks);
    swapStudents(&student1, &student2);
    
    printf("\nAfter swapping:\n");
    printf("Student 1: Name=%s, Age=%d, Marks=%.2f\n", student1.name, student1.age, student1.marks);
    printf("Student 2: Name=%s, Age=%d, Marks=%.2f\n", student2.name, student2.age, student2.marks);
    
    return 0;
}
