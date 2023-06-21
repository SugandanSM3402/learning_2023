/*
Use structures to find the volume and the total surface area of the box. 
   You need to access the members of the structure with the help of a structure pointer:
    a. With the help of (*) asterisk or indirection operator and (.) dot operator.
    b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.
Volume of a box:
Volume = length * width * height
Total Surface Area of a box:
Surface Area = 2 * (length * width + length * height + width * height)
*/
#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};
double calculateVolume(struct Box *ptr) {
    return (ptr->length) * (ptr->width) * (ptr->height);
}

double calculateTotalSurfaceArea(struct Box *ptr) {
    return 2 * ((ptr->length * ptr->width) + (ptr->length * ptr->height) + (ptr->width * ptr->height));
}

int main() {
    struct Box b;
    
    printf("Enter the Length: ");
    scanf("%lf", &b.length);
    
    printf("Enter the Width: ");
    scanf("%lf", &b.width);
    
    printf("Enter the Height: ");
    scanf("%lf", &b.height);
    
    printf("<<<---Result--->>>\n");
    printf("Volume of Box: %.2f\n", calculateVolume(&b));
    printf("Total Surface Area of Box: %.2f\n", calculateTotalSurfaceArea(&b));
    printf("<<<------------>>>\n");
    
    return 0;
}

