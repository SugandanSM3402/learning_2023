/*
Write a program to swap any type of data passed to an function.

Topics to be covered
- Pointers
- Type Casting
*/
#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    char* ptr_a = (char*)a;
    char* ptr_b = (char*)b;
    char temp;

    for (size_t i = 0; i < size; i++) {
        temp = *(ptr_a + i);
        *(ptr_a + i) = *(ptr_b + i);
        *(ptr_b + i) = temp;
    }
}

int main() {
    int choice;

    printf("Choose Data type:\n");
    printf("1. int\n2. double\n3. char\n4.float\nEnter your choice:");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            int number1, number2;
            printf("Enter two integers: ");
            scanf("%d %d", &number1, &number2);
            printf("Before swap: number1 = %d, number2 = %d\n", number1, number2);
            swap(&number1, &number2, sizeof(int));
            printf("After swap: number1 = %d, number2 = %d\n", number1, number2);
            break;
        }
        case 2: {
            double double_a, double_b;
            printf("Enter two doubles: ");
            scanf("%lf %lf", &double_a, &double_b);
            printf("Before swap: double_a = %lf, double_b = %lf\n", double_a, double_b);
            swap(&double_a, &double_b, sizeof(double));
            printf("After swap: double_a = %lf, double_b = %lf\n", double_a, double_b);
            break;
        }
        case 3: {
            char char_a, char_b;
            printf("Enter two characters: ");
            scanf(" %c %c", &char_a, &char_b);
            printf("Before swap: char_a = %c, char_b = %c\n", char_a, char_b);
            swap(&char_a, &char_b, sizeof(char));
            printf("After swap: char_a = %c, char_b = %c\n", char_a, char_b);
            break;
        }
        case 4: {
            float float_a, float_b;
            printf("Enter two floats: ");
            scanf("%f %f", &float_a, &float_b);
            printf("Before swap: float_a = %f, float_b = %f\n", float_a, float_b);
            swap(&float_a, &float_b, sizeof(float));
            printf("After swap: float_a = %f, float_b = %f\n", float_a, float_b);
            break;
        }
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

