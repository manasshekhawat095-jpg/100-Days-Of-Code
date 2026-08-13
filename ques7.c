//Q7: Write a program to swap two numbers without using a third variable.

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    printf("before swapping: %d %d\n",a,b);
    a=a+b;
    a=a-b;
    b=a-b;
    printf("after swapping: %d %d\n",a,b);
    return 0;
}
