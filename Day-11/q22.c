//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>

int main() {
    double cp, sp;

   
    if (scanf("%lf %lf", &cp, &sp) == 2)
     {
       
        if (cp <= 0) {
            printf("Cost price must be greater than zero.\n");
            return 1;
        }

        if (sp > cp) {
            double profit = sp - cp;
            double profit_percent = (profit / cp) * 100;
            
            
            printf("Profit %.0f%%\n", profit_percent);
        } 
        else if (cp > sp) {
            double loss = cp - sp;
            double loss_percent = (loss / cp) * 100;
            
            printf("Loss %.0f%%\n", loss_percent);
        } 
        else {
            printf("No Profit No Loss\n");
        }
    } 
    else {
        printf("Invalid input format.\n");
    }

    return 0;
}
