//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h> // Required for sqrt()

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    // Input coefficients a, b, and c
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    discriminant = (b * b) - (4 * a * c);

    // Case 1: Real and distinct roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        // Print removing trailing zeros for clean output matching sample cases
        printf("Roots are real and different: %g, %g\n", root1, root2);
    }
    // Case 2: Real and equal roots
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same: %g\n", root1);
    }
    // Case 3: Complex / Imaginary roots
    else {
        printf("Roots are complex\n");
        // Optional tracking if you want to print them: 
        // realPart = -b / (2 * a);
        // imagPart = sqrt(-discriminant) / (2 * a);
    }

    return 0;
}
