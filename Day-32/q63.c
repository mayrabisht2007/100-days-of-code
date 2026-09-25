//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stddef.h> 
#include <stdio.h>
int main()
{int c,d;
    
    printf("enter size of array 1 \t");
    scanf("%d",&c);
     printf("enter size of array 2 \t");
    scanf("%d",&d);
     int a[c];
     int b[d];
    int n=c+d;
    int arr[n];
    for(int i=0;i<c;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<d;j++)
    {
        scanf("%d",&b[j]);
    }
    for(int k=0;k<c;k++)
    {
        arr[k]=a[k];
    }
    for(int k=0;k<d;k++)
    {
        arr[k+c]=b[k];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d   ",arr[i]);
    }
    return 0 ;
}
