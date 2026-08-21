//Q23: Write a program to calculate library fine based on late days as follows: 
/*First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/
#include<stdio.h>
int main() {
    int lateDays;
    int fine = 0;

    printf("Enter the number of late days: ");
    scanf("%d", &lateDays);

    if (lateDays <= 0) {
        printf("No fine. Thank you for returning the book on time.\n");
    } else if (lateDays <= 5) {
        fine = lateDays * 2;
        printf("Your fine is: ₹%d\n", fine);
    } else if (lateDays <= 10) {
        fine = (5 * 2) + ((lateDays - 5) * 4);
        printf("Your fine is: ₹%d\n", fine);
    } else if (lateDays <= 30) {
        fine = (5 * 2) + (5 * 4) + ((lateDays - 10) * 6);
        printf("Your fine is: ₹%d\n", fine);
    } else {
        printf("Membership Cancelled due to excessive late days.\n");
    }

    return 0;
}