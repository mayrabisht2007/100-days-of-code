/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   ***/

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter n ");
    scanf("%d",&n);
for(int i=n;i>=1;i--)
{
               for(int space =1;space<=n-i;space++)
                    {
                           printf(" ");
                           }
                for(int k=i;k>=1;k--)
                    {
                       printf("*");
                        }
                printf("\n");
}
return 0;
}
