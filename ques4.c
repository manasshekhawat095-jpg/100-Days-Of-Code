//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main()
 {
    int area, circumference;
    float radius;
    printf("enter the radius of the circle: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf("Area of the circle: %d\n", area);
    printf("Circumference of the circle: %d\n", circumference);
    return 0;
 }