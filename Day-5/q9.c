//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h> 

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest, total_amount;

   
    printf("Enter Principal, Rate, and Time: ");
    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    // 1. Calculate Simple Interest
    // Formula: SI = (P * R * T) / 100
    simple_interest = (principal * rate * time) / 100;

    // 2. Calculate Compound Interest
    // Formula: Amount = P * (1 + R/100)^T
    // CI = Amount - Principal
    total_amount = principal * pow((1 + rate / 100), time);
    compound_interest = total_amount - principal;

    // Display the results, stripping trailing zeros dynamically using %g
    printf("Simple Interest=%g, Compound Interest=%g\n", simple_interest, compound_interest);

    return 0;
}
//%f output: 102.500000 %g output: 102.5
