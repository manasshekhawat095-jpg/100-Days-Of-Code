//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main()
{
    float cost_price, selling_price, profit, loss, profit_percentage, loss_percentage;
    printf("Enter cost price: ");
    scanf("%f", &cost_price);
    printf("Enter selling price: ");
    scanf("%f", &selling_price);
    if(selling_price > cost_price)
    {
        profit = selling_price - cost_price;
        profit_percentage = (profit / cost_price) * 100;
        printf("Profit percentage: %.2f%%\n", profit_percentage);
    }
    else if(selling_price < cost_price)
    {
        loss = cost_price - selling_price;
        loss_percentage = (loss / cost_price) * 100;
        printf("Loss percentage: %.2f%%\n", loss_percentage);
    }
    else
    {
        printf("No profit, no loss.\n");
    }
    return 0;
}