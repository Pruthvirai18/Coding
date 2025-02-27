//C program to check a Character Is An vowel  Or consonant
// #include<stdio.h>
// int main()
// {
//     char ch;
//     scanf("%c",&ch);
//     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' ||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
//     {
//         printf("%c is a vowel",ch);
//     }
//     else
//         printf("Its a consonant");
//     return 0;
// }

//Using functions
#include<stdio.h>
int lowercase(char c)
{
    return(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
int uppercase(char c)
{
    return(c=='A'||c=='E'||c=='I'||c=='O',c=='U');
}
int main()
{
char ch;
scanf("%c",&ch);
if(lowercase(ch)||uppercase(ch))
printf("%c is a vowel",ch);
else
printf("%c is a consonant",ch);
}