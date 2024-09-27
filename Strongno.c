#include<stdio.h>
int main()
{
    int num,rem,res=0;
    printf("Enter the number");
    scanf("%d",&num);
    int temp=num;
    int fact(int n)
    {
        int f=1;
        for(int i=1;i<=n;i++)
        f*=i;
        return f;
    }
    while(num!=0)
    {
        rem=num%10;
        res=res+fact(rem);
        num/=10;
    }
    if(temp==res)
    printf("%d is a strong number",temp);
    else
    printf("%d is not  a strong number",temp);
    return 0;
}