//C program to calculate the sum of the carry generated during addition of two numbers
#include<stdio.h>
int sumofcarry(int a,int b)
{
    int num1,num2,sum;
    int carry=0;
    while(a>0||b>0)
    {
    num1=a%10;
    num2=b%10;
    sum=num1+num2;
    if(sum>9)
    {
        carry+=1;
    }
    a=a/10;
    b=b/10;
   }
   return carry;
}
int main()
{
    int a,b;
    printf("Enter two nos");
    scanf("%d%d",&a,&b);
    printf("Sum of carry is %d",sumofcarry(a,b));
    return 0;
}