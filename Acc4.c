// You are required to implement the following function:
// int CountDigitOccurrences(int l, int u, int x);
// The function accepts 3 positive integers ‘l’, ‘u’ and ‘ x’ as its argument. you are required to calculate the number of occurrences of a digit ‘x’ in the digit of
//  number lying in the range between ‘l’ and ‘u’ both inclusive, and return the same.
// Note:
// l<=u 0<=x<=9
// Example:
// Input:
// l: 2 u: 13 x:3
// Output:2
// Explanation:
// The number of occurrences of digit 3 in the digits of the number lying in the 
// range [2,13] both inclusive is 2, i.e{3,13}, hence 2 is returned.


#include<stdio.h>
int CountDigitOccurrences(int l, int u, int x)
{
    int num, count=0;
    if(l<=u)
    {
    int i,rem;
    for(i=l;i<=u;i++)
    {
        num=i;
        while(num!=0)
        {
        rem=num%10;
        
        if(rem==x)
            count++;
        num/=10;
        }
    }
    return count;
    }
}
int main()
{
    int a,b,y;
    printf("Enter numbers");
    scanf("%d%d",&a,&b);
    printf("Enter value of y");
    scanf("%d",&y);
    printf("%d",CountDigitOccurrences(a,b,y));
    return 0;
}