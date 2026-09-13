//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>

int main() {
    int num, original, temp, remainder;
    int digits = 0;
    int sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    while (temp > 0) {
        remainder = temp % 10;
        
        int product = 1;
        for (int i = 0; i < digits; i++) {
            product = product * remainder;
        }
        
        sum = sum + product;
        temp = temp / 10;
    }

    if (sum == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}
