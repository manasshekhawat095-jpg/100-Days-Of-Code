//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main()
{
    int a,b,area,perimeter;
    printf("Enter the length of rectangle: ");
    scanf("%d",&a);
    printf("Enter the breadth of rectangle: ");
    scanf("%d",&b);
    area=a*b;
    perimeter=2*(a+b);
    printf("Area of rectangle is: %d\n",area);
    printf("Perimeter of rectangle is: %d\n",perimeter);
    return 0;
}