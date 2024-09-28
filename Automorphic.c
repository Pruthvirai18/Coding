// //C program to find whether the number is automorphic Ex:5^2=25,25^2=625 
#include<stdio.h>
int length(int n)
{
    int len=0;
    while(n!=0)
    {
        len++;
        n/=10;
    }
    return len;
}
int main()
{
    long num,divisor=1;
    printf("Enter the number");
    scanf("%d",&num);
    long square=num*num;
    printf("%d",length(num));
    for(int i=1;i<=length(num);i++)
    divisor*=10;
    printf("%ld",divisor);
    if(num==square%divisor)
        printf("%ld is automorphic number",num);
    else
        printf("%ld is not automorphic number",num);
    return 0;
}
