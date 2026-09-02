//Q48: Write a program to print the following pattern:

#include<stdio.h>
int main()
{
    int i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &i);
    for(i = 1; i <= i; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}