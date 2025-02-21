// You are required to implement the following function:
// int CountSpecificNumbers(int m, int n);
// The function accepts two arguments m and n which are integers. You are required to calculate the count of numbers having only 1, 4 and 9 as their digits between the 
// numbers lying in the range m and n both inclusive, and return the same. Return -1 if m>n.//
//i/p:100 200 o/p:9
// The numbers between 100 and 200, both inclusive having only 1,4 and 9 as their digits are 
// 111, 114, 119, 141, 144, 149, 191, 194, 199. The count is 9 hence 9 is returned.
#include<stdio.h>
int CountSpecificNumbers(int m, int n)
{
    int i,rem,num,count=0;
    if(m<n)
    {
    for(i=m;i<=n;i++)
    {
        int flag=1;
        num=i;
        while(num!=0)
        {
            rem=num%10;
            num/=10;
            if(rem==1||rem==4||rem==9)
                continue;
            else
            {
                flag=0;
                break; 
            }
        }  
        if(flag==1)
            count++;
    }
    return count;
}
else
    return -1;
}
int main()
{
    int a,b;
    printf("Enter numbers");
    scanf("%d%d",&a,&b);
    printf("%d",CountSpecificNumbers(a,b));
    return 0;
}