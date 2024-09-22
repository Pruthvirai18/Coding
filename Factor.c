//C program to find the factor of a number
#include<stdio.h>
int main()
{
    int num,i,factor;
    printf("Enter the number");
    scanf("%d",&num);
    printf("Factors of %d are",num);
    for(i=1;i<=num;i++)
    {
        factor=num%i;
        if(factor==0)
        printf(" %d ",i);
    }
    return 0;
}