#include<stdio.h>
int differencesum(int n,int m)
{
    int div_sum=0;
    int notdiv_sum=0;
    for(int i=1;i<=m;i++)
    {
        if(i%n==0)
        div_sum+=i;
        else
        notdiv_sum+=i;
    }
    return(notdiv_sum-div_sum);
}
int main()
{
    int m,n;
    scanf("%d",&n);
    scanf("%d",&m);
    printf("%d",differencesum(n,m));
    return 0;
}