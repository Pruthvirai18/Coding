// Implement the following function:
// int BalanceFruits(int a, int m, int rs);
// You have a basket full of apples and mangoes, your job is to make the numer of apples and given a function that accepts three integers 'a', 'm' and 'rs' as its argument where 'a' and a basket respectively and 'rs' is the rupees that you have. Implement the function to balance the basket.

// If 'a' > 'm', then buy (a - m) mangoes at the rate of Rs 1 per mango.
// If 'a' < 'm', then sell (m - a) mangoes at the rate of Rs 1 per mango.
// Return the total rupees left with you after balancing the fruits.
// Assumption:
// a > = 0, m > = 0 and rs > = 0
// rs > = (a - m)
// Note: If a = m, return rs unchanged

#include<stdio.h>
int BalanceFruits(int a, int m, int rs)
{
    if(a>m)

        return rs-(a-m);
    else if (a<m)

        return rs+(m-a);

    else if(a==m)

        return rs;
}
int main()
{
    int apple,mango,rupees;
    printf("Enter apple,mango,rupees");
    scanf("%d%d%d",&apple,&mango,&rupees);
    printf("%d",BalanceFruits(apple,mango,rupees));
    return 0;
}