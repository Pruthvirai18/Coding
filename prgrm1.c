//Write a function to accept two positive integers r,unit ans a positive integer array of size n where r represents no.of rats present in the city,
//unit represents the amount of food consumed by each rat, i element of the array represents the amount of food present in each house.
//Return no of houses sufficient for rats in terms of food with the constraints saying that rats starts consuming the food right from the first house present in the city
#include<stdio.h>
int housesuff(int r,int unit,int n,int houses[])
{
   int totalfood=r*unit;
   int csum=0;
   int i;
   for(i=0;i<=n;i++)
   {
    csum+=houses[i];
    if(csum>=totalfood)
    break;
   }
   return i+1;
}
int main()
{
    int n,r,unit;
    printf("Enter the no of rats");
    scanf("%d",&r);
    printf("Enter the no of units");
    scanf("%d",&unit);
    printf("Enter the no of  houses");
    scanf("%d",&n);
    int houses[n];
    printf("Enter the houses");
    for(int i=0;i<n;i++)
    scanf("%d",&houses[i]);
    printf("No of houses sufficient is %d",housesuff(r,unit,n,houses));
    return 0;
}