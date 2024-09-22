//C program to find the power of a number
#include<stdio.h>
int main()
{
    int num,exp,i;
    float power=1;
    printf("Enter the number");
    scanf("%d",&num);
    printf("Enter the exponent");
    scanf("%d",&exp);
    while(exp>0)
    {
        power*=num; //power=power*num
        exp--;
    }
    while(exp<0)
    {
        power=power/num;
         exp++;
    }
    
    printf("Power of a number is %.4f",power);
    return 0;
}
