//C program for Fibonacci series using recursion
//Fibonacci series upto 7:0 1 1 2 3 5 8  
#include<stdio.h>
int fibonacci(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n,i;
    printf("Enter the fibonacci series upto");
    scanf("%d",&n);
    printf("Fibonacci series is ");
    for(i=0;i<=n;i++)
    printf("%d ",fibonacci(i));
    return 0;
}
