//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

#include<stdio.h>
int main()
{
    int month;
    printf("enter month numnber (1-12):");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        printf("Month: January - 31\n",month);      
        break;
        case 2:
        printf("Month: February - 28/29\n",month);
        break;
        case 3:
        printf("Month: March - 31\n",month);
        break;
        case 4:
        printf("Month: April - 30\n",month);
        break;
        case 5:
        printf("Month: May - 31\n",month);
        break;
        case 6:
        printf("Month: June - 30\n",month);
        break;
        case 7:
        printf("July - 31\n",month);
        break;
        case 8:
        printf("Month: August - 31\n",month);
        break;
        case 9:
        printf("September - 30\n",month);
        break;
        case 10:
        printf("Month: October - 31\n",month);
        break;
        case 11:
        printf("November - 30\n",month);
        break;
        case 12:
        printf("Month: December - 31\n",month);
        break;
        default:
        printf("Invalid month number\n");
    }
    return 0;
}