//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Read the two numbers from user input
    if (scanf("%d %d", &num1, &num2) == 2) {
        
        // Step 1: Copy the value of num1 into the third variable (temp)
        temp = num1;
        
        // Step 2: Copy the value of num2 into num1
        num1 = num2;
        
        // Step 3: Copy the value of temp (original num1) into num2
        num2 = temp;

        // Display the swapped values in the required output format
        printf("After swap: %d %d\n", num1, num2);
    }

    return 0;
}
