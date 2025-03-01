//C program to check if a given string is palindrome or not
#include<stdio.h>
#include<string.h>
int palindrome(char *str)
{
    int i,flag=0;
    int len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]!=str[len-i-1])
            flag=1;

    }
    if(flag==1)
        printf("Its not a palindrome");
    else
        printf("It is a palindrome");
}
int main()
{
    char str[100];
    printf("Enter the string");
    scanf("%s",str);
    palindrome(str);
}