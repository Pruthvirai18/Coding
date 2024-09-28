//Cprogram to find whether the number is a abundant number
//Ex:12 Perfect divisors:1,2,3,4,6 sum=16 16>12 
#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter the number");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        sum+=i;
    }
    if(sum>num)
    {
        printf("%d is a abundant number",num);
        printf("\nNum:%d\nSum:%d\nAbundance:%d",num,sum,(sum-num));
    }
    else
        printf("%d is not a abundant number",num);
    return 0;
}
