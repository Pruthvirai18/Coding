#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string");
    scanf("%s",str);
    int i,length=0;
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    printf("Lenth is %d",length);
return 0;
}