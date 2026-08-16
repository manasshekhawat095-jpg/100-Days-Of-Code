//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>
int main ()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("%c is a vowel",ch);
    }
    else if((ch>='a'&&ch<='z')|ch|ch>='A'&&ch<='Z'||ch>='0'&&ch<='9')
    {
        printf("%c is a consonant",ch);
    }
    else
    {
        printf("%c is not an alphabet",ch);
    }
    return 0;
}