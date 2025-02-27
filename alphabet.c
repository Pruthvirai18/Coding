//C program to check a Character Is An alphabet
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
    printf("%c is a alphabet",ch);
    else
    printf("%c is not a alphabet",ch);
    return 0;


}