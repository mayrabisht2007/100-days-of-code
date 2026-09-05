//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Read temperature in Celsius from user
    if (scanf("%f", &celsius) == 1) {
        // Apply the conversion formula: (C * 9/5) + 32
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

        // Display the result matching the required output format
        // Use %.0f if you only want whole numbers, or %g / %.2f for decimals.
        printf("Fahrenheit=%.0f\n", fahrenheit);
    }

    return 0;
}
