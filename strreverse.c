//C program to print the string in reverse order
//Approach1
// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char str[100];
//     printf("Enter the string");
//     scanf("%s",str);
    
//     int i;
//     for(i=strlen(str)-1;i>=0;i--)
//     {
//         printf("%c",str[i]);
//     }
   
// }

//Approach2

#include<stdio.h>
#include<string.h>
int strreverse(char *str1)
{
    int temp;
    int i,len=strlen(str1);
    for(i=0;i<len/2;i++)
    {
        temp=str1[i];
        str1[i]=str1[len-i-1];
        str1[len-i-1]=temp;
    }
}
int main()
{
    char str[100];
    printf("Enter the string");
    scanf("%s",str);
    strreverse(str);
    printf("Reversed string is %s",str);

}