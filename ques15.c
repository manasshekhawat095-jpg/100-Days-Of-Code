//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
int main()
{
    int ch;
    printf("enter a character");
    scanf("%d",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("Uppercase Alphabet\n");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("Lowercase Alphabet\n");   
    }
    else if(ch>='0' && ch<='9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
    return 0;
}