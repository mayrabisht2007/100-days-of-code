//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include <stdio.h>

int main() {
    char ch;

    
    scanf("%c", &ch);

    
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase alphabet\n");
    }
    // Check for Lowercase Alphabet (ASCII 97 to 122)
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase alphabet\n");
    }
    // Check for Digit (ASCII 48 to 57)
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    
    else {
        printf("Special character\n");
    }

    return 0;
}
