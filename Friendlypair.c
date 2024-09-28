#include<stdio.h>
int div_sum(int n)
{
    int sum=0;
    for(int i=1;i<=n/2;i++)
    {
    if(n%i==0)
    sum+=i;
    }
    return sum;
}
int main()
{
    int a,b,num1,num2;
    printf("Enter the two no.s");
    scanf("%d %d",&a,&b);
    num1=div_sum(a);
    num2=div_sum(b);
    if(a/num1==b/num2)
        printf("%d and %d is a friendly pair",a,b);
    else
        printf("%d and %d is not a friendly pair",a,b);
    return 0;
}