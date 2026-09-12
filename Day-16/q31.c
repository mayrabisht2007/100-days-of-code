//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main() {
    int num;

    
    if (scanf("%d", &num) == 1) {
        if (num == 0) {
            printf("0\n");
            return 0;
        }

        long long binary_num = 0;
        long long place_value = 1;

        while (num > 0) {
            int remainder = num % 2;
            binary_num = binary_num + (remainder * place_value);
            
            place_value *= 10; 
            num = num / 2;     
        }
        printf("%lld\n", binary_num);
    } 
    else {
        printf("Invalid input.\n");
    }

    return 0;
}
