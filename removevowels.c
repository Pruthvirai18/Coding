#include<stdio.h>
int vowelremove(char *str)
{
    int i, j=0;
    for( i=0;str[i]!='\0';i++)
    {
       char ch=str[i];
       if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'
        |ch=='E'||ch=='I'||ch=='O'||ch=='U'))
        {
            str[j++]=ch;

        }
    }
    str[j]='\0';
}
int main()
{
    char str[100];
    printf("Enter the string");
    fgets(str,sizeof(str),stdin);
    vowelremove(str);
    printf("String after removing vowels: %s\n", str);
    
}
