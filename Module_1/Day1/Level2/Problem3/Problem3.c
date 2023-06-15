/*Write a function to find if a give character is vowel using switch case statements, 
    - If vowel, return 1
    - If not vowel, return 0;

In main print,
"Vowel" if return value is 1
"Not Vowel" if return value is 1 */
#include <stdio.h>

int isVowel(char char_a) {
    int isVowel = 0;
    
    switch(char_a) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            isVowel = 1;
            break;
        default:
            isVowel = 0;
    }
    
    return isVowel;
}

int main() {
    char character;
    
    printf("Enter a character: ");
    scanf(" %c", &character);
    
    int result = isVowel(character);
    
    if (result == 1) {
        printf("Vowel\n");
    } else {
        printf("Not Vowel\n");
    }
    
    return 0;
}
