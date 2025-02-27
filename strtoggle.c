//C Program to Toggle Each Character in a String(Upper to lower and lower to upper case)

#include<stdio.h>
int main()
{
    char str[100],i;
    printf("Enter the string");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
        else if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
    printf("%s",str);
    return 0;

}