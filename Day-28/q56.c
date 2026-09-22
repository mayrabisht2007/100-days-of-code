//Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
#include <stdio.h>
int main()
{ int n;
    printf("enter numbers to enter");
    printf(" ");
    scanf("%d",&n);
    int arr[n];
    printf("enter numbers now ");
    printf(" ");
    for(int i=1;i<=n;i++)
{
    scanf("%d",&arr[i]);
}
for(int j=1;j<=n;j++)
{
    printf("%d",arr[j]);
    printf(" ");
}

    return 0;
}
