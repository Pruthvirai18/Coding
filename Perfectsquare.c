#include<stdio.h>
int main()
{
    int num,i,isPerfect=0;;
    printf("Enter the number");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        if(i*i==num)
        {
        printf("%d is a perfect square of %d",num,i);
        isPerfect=1;
        }
    }
    if(isPerfect!=1)
         printf("%d is not a perfect square",num);
    return 0;                                                    
}