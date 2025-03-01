#include<stdio.h>
int main()
{
    int num;
    printf("Enter number");
    scanf("%d",&num);
    int originalnum=num;
    int rem,rev=0;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if(originalnum==rev)
    printf("Palindrome");
    else
    printf("Not palindrome");
}