//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include<stdio.h>
int main() {
    int n, i;
    float sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        sum += (2 * i + 1) / (float)(2 * i + 2);
    }
    printf("The sum of the series up to %d terms is: %.2f\n", n, sum);
    return 0;
}