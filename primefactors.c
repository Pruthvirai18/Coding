#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    for(int i=2;i<=num;i++)
    {
        while(num%i==0)
        {
            printf("%d ",i);
            num=num/i;
        }
    }
return 0;
}