//C program for Fibonacci series without recursion
#include<stdio.h>
int main()
{
    int n,i;
    int a=0;
    int b=1;
    int nextterm;
    printf("Enter the Fibonacci series upto");
    scanf("%d",&n);
    printf(" %d %d ",a,b);
    for(i=2;i<n;i++)
    {
        nextterm=a+b;
        a=b;
        b=nextterm;
        printf("%d ",nextterm);
    }
     return 0;
}