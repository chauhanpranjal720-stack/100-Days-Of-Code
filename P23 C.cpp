//Q23: Write a program to calculate library fine based on late days as follows: 

#include <stdio.h>

int main() {
    
    int days;
    int fine = 0; 
    printf("Enter the number of late days: ");
    scanf("%d", &days);    
    if (days <= 0) {
        printf("No fine is due. Thank you!\n");
    } else if (days <= 5) {
        fine = days * 2;
        printf("Your fine is: %d\n", fine);
    } else if (days <= 10) {   
        fine = (5 * 2) + (days - 5) * 4;
        printf("Your fine is: %d\n", fine);
    } else if (days <= 30) {   
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Your fine is: %d\n", fine);
    } else {    
        printf("Your library membership has been cancelled.\n");
    }
    return 0; 
}
