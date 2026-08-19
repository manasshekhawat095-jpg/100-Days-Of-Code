//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main() {
    float side1, side2, side3;

    // Input the lengths of the sides of the triangle
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &side1, &side2, &side3);

    // Check for valid triangle
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Invalid input. Side lengths must be positive.\n");
        return 1;
    }
    
    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        printf("The given lengths do not form a triangle.\n");
        return 1;
    }

    // Classify the triangle
    if (side1 == side2 && side2 == side3) {
        printf("The triangle is Equilateral.\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("The triangle is Isosceles.\n");
    } else {
        printf("The triangle is Scalene.\n");
    }

    return 0;
}