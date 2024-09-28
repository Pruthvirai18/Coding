#include<stdio.h>
int order(int x)
{
    int l=0;
    while(x)
    {
        l++;
        x=x/10;
    }
    return l;
}
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    int temp=num;
    int square=num*num;
    int len=order(num);
    int count=0;
    while(len!=count)
    {
        if(num%10!=square%10)
        {
        printf("%d is not automorphic number",temp);
        break;
        }
        else
        {
        num/=10;
        square/=10;
        count++;
        }
    }
    if(len==count)
        printf("%d is a automorphic number",temp);
return 0;
}