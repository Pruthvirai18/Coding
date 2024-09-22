//C program to find whether the no is a armstrong or not without using function
#include<stdio.h>
int main()
{
    int num,arm=0,rem,i,len=0,pow;
    printf("Enter the number");
    scanf("%d",&num);
    int n=num;
    int number=num;
    while(num>0)
    {
        len++;
        num=num/10;
    }
    while(n>0)
    {
        rem=n%10;
        pow=1;
        for(i=0;i<len;i++)
        {
            pow=pow*rem;
        }
        arm=arm+pow;
        n/=10;
    }
    if(number==arm)
        printf("%d is a armstrong number",number);
    else
        printf("%d is not a armstrong number",number);
    return 0;
}
