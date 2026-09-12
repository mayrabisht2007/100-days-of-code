//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) == 1)
     {
        
        if (n < 0) {
            printf("Please enter a positive integer.\n");
            return 1;
        }

        int sum = 0;
        int current_odd = 1;

        
        for (int i = 1; i <= n; i++) {
            sum += current_odd;     
            current_odd += 2;      
        }
        printf("%d\n", sum);
    }
    return 0;
}
