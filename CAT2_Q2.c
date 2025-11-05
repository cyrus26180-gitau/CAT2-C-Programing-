/*
Name:Cyrus wainaiana
Reg no:CT100/G/26180/25
Describtion:program to monitor workers pay.
*/

#include <stdio.h>

int main() {
    float hours, rate, grossPay, tax, netPay;
    
    // Input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &rate);

    // Calculate gross pay with overtime
    if (hours <= 40)
        grossPay = hours * rate;
    else
        grossPay = (40 * rate) + ((hours - 40) * rate * 1.5);

    // Calculate tax
    if (grossPay <= 600)
        tax = grossPay * 0.15;
    else
        tax = (600 * 0.15) + ((grossPay - 600) * 0.20);

    // Calculate net pay
    netPay = grossPay - tax;

    // Output results
    printf("\nGross Pay: $%.2f", grossPay);
    printf("\nTaxes: $%.2f", tax);
    printf("\nNet Pay: $%.2f\n", netPay);

    return 0;
}
