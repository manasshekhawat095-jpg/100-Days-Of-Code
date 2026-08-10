//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;  
    f=a/b;
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d",c,d,e,f);
    return 0;
}