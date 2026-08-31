//Q43: Write a program to check if a number is a strong number.

#include <stdio.h>77
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, rem, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    originalNum = num; // Store the original number
    
    // Extract digits and sum their factorials
    while(num > 0) {
        rem = num % 10;
        sum += factorial(rem);
        num = num / 10;
    }
    
    // Check if the sum matches the original number
    if(sum == originalNum) {
        printf("%d is a Strong number.\n", originalNum);
    } else {
        printf("%d is not a Strong number.\n", originalNum);
    }
    
    return 0;
}