//Q39: Write a program to find the product of odd digits of a number.

#include<stdio.h>
int main() {
    int num, digit, product = 1, hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10; // Get the last digit
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit; // Multiply the odd digit to the product
            hasOdd = 1; // Set flag to indicate at least one odd digit was found
        }
        num /= 10; // Remove the last digit
    }

    if (hasOdd) {
        printf("The product of odd digits is: %d\n", product);
    } else {
        printf("No odd digits found in the number.\n");
    }

    return 0;
}