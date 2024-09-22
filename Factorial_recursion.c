//Factorial of a number using recursion
#include<stdio.h>
int factorial(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return n*factorial(n-1);
}
int main()
{
    int num,fact;
    printf("Enter the number");
    scanf("%d",&num);
    fact=factorial(num);
    printf("Factorial of a number is %d",fact);
    return 0;
}