//Q41: Write a program to swap the first and last digit of a number.

#include<stdio.h>
int main() {
    int num, firstDigit, lastDigit, temp, swappedNum;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Get the last digit
    lastDigit = num % 10;
    
    // Get the first digit
    temp = num;
    while (temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;
    
    // Remove the first and last digit from the original number
    swappedNum = num - (firstDigit * (int)pow(10, (int)log10(num))) - lastDigit;
    
    // Add the swapped digits
    swappedNum += (lastDigit * (int)pow(10, (int)log10(num))) + firstDigit;
    
    printf("Number after swapping first and last digit: %d\n", swappedNum);
    
    return 0;
}