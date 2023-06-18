/*Convert String as Integer in c program */
#include <stdio.h>
int stringToInt(char* str) {
    int num = 0;
    int sign = 1;
    int i = 0;
    
    while (str[i] != '\0') {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    
    return num ;
}

int main() {
    char str[101];
    printf("Enter the string: ");
    scanf("%s",str);
    int num = stringToInt(str);
    
    printf("String: %s\n", str);
    printf("Integer: %d\n", num);
    
    return 0;
}
