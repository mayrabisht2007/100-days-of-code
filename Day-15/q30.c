//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>

int main() {
    int num;
    if (scanf("%d", &num) == 1) {
        
        int reversed_num = 0;
        int original_num = num; 

       
        while (num != 0) {
            int last_digit = num % 10;             
            reversed_num = (reversed_num * 10) + last_digit;
            num = num / 10;                           
        }

        printf("%d\n", reversed_num);
    } 
    else {
        printf("Invalid input.\n");
    }

    return 0;
}
