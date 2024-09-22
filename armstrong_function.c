#include<stdio.h>
int power(int rem,int len)
{
    int res=1;
    for(int i=0;i<len;i++)
    {
        res*=rem;
    }
    return res;
}
int order(int x)
{
    int len=0;
    while(x)
    {
        len++;
        x=x/10;
    }
    return len;
}

void arm(int a,int b)
{
    for(int num=a;num<=b;num++)
    {
        int rem,armstrong=0;
        int temp=num;
        int len=order(num);
        while(temp>0)
        {
            rem=temp%10;
            armstrong=armstrong+power(rem,len);
            temp/=10;
            
        };
        if(num==armstrong)
    printf("%d ",num);
    }
}
int main()
{
    int a,b;
    printf("Enter value of a and b");
    scanf("%d%d",&a,&b);
    arm(a,b);
    return 0;
}

