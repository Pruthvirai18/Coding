#include<stdio.h>
int main()
{
    int n,i,count;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count>2)
    printf("%d is not prime",n);
    else 
    printf("%d is prime",n); 
    return 0;
}

                                                                        
