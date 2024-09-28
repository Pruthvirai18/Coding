#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("Enter the number");
    scanf("%d",&num);
    int temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num/=10;
    }
    if(temp%sum==0)
        printf("%d is a Harshad number",temp);
    else
        printf("%d is not a Harshad number",temp);
    return 0;
}