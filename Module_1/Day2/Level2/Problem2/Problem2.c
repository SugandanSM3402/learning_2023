/*W.A.P to compare the items in a box, assume equal size boxes
Boxes shall have unique items stored in random order
Boxes are compared True if there is one to one mapping of items
return the final result 1 or 0

Example of Equal Boxes:
A[3] = {200, 10, -90}
B[3] = {-90, 200, 10}    

Example of Unequal Boxes:
A[3] = {200, 9, -90}
B[3] = {-90, 200, 10}    

Note: The array should not be sorted

Topics to be covered
- Arrays
- Loops
- Basic Operators*/
#include <stdio.h>

int compareBoxes(int boxA[], int boxB[], int size) {
    int i, j, count;
    
    for (i = 0; i < size; i++) {
        count = 0;
        for (j = 0; j < size; j++) {
            if (boxA[i] == boxB[j]) {
                count = 1;
                break;
            }
        }
        
        if (count==0) {
            return 0; 
        }
    }
    
    return 1; 
}

int main() {
    int size;
    printf("Enter the size of the boxes: ");
    scanf("%d", &size);
    
    int boxA[size], boxB[size];
    printf("Enter the items of boxA: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &boxA[i]);
    }
    
    printf("Enter the items of boxB: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &boxB[i]);
    }
    
    int result = compareBoxes(boxA, boxB, size);
    
    if (result) {
        printf("Equal Boxes");
    } else {
        printf("Unequal Boxes");
    }
    printf("\n");
    return 0;
}
