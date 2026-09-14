//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    int num, originalNum, swappedNum;
    int firstDigit, lastDigit;
    int placeValue = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;
    lastDigit = num % 10;

    while (num >= 10) {
        num = num / 10;
        placeValue = placeValue * 10;
    }
    firstDigit = num;

    swappedNum = originalNum - (firstDigit * placeValue) - lastDigit;
    swappedNum = swappedNum + (lastDigit * placeValue) + firstDigit;

    printf("Swapped number: %d\n", swappedNum);

    return 0;
}
