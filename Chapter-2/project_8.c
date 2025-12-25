// Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments:

#include <stdio.h>

#define DECIMAL_CONVERSION .01
#define MONTHS_IN_YEAR 12

int main(void)
{
    float loan_amount, interest_rate, monthly_payment;

    printf("Enter amount of loan: \n");
    scanf("%f", &loan_amount);

    printf("Enter interest rate: \n");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: \n");
    scanf("%f", &monthly_payment);

    float monthly_interest_rate = interest_rate * DECIMAL_CONVERSION / MONTHS_IN_YEAR;
    float balance_after_first_payment = loan_amount + (loan_amount * monthly_interest_rate) - monthly_payment;
    float balance_after_second_payment = balance_after_first_payment + (balance_after_first_payment * monthly_interest_rate) - monthly_payment;
    float balance_after_third_payment = balance_after_second_payment + (balance_after_second_payment * monthly_interest_rate) - monthly_payment;

    printf("Balance remaining after first payment: %.2f\n", balance_after_first_payment);
    printf("Balance remaining after second payment: %.2f\n", balance_after_second_payment);
    printf("Balance remaining after third payment: %.2f\n", balance_after_third_payment);
    
    return 0;
}