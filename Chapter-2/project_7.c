// Write a program that asks the user to enter a U.S. dollar amount
// Then show how to pay that amount using the smallest number of $20, $10, $5, and $1 bills:

#include <stdio.h>

#define TWENTY_DOLLAR_BILL_VALUE 20
#define TEN_DOLLAR_BILL_VALUE 10
#define FIVE_DOLLAR_BILL_VALUE 5
#define ONE_DOLLAR_BILL_VALUE 1

int main(void)
{
    int total_amount;

    printf("Enter a dollar amount: \n");
    scanf("%d", &total_amount);

    int twenty_dollar_bill_amount = total_amount / TWENTY_DOLLAR_BILL_VALUE;
    printf("$20 bills: %d\n", twenty_dollar_bill_amount);

    int twenty_dollar_bill_remainder = total_amount - twenty_dollar_bill_amount * TWENTY_DOLLAR_BILL_VALUE;
    int ten_dollar_bill_amount = twenty_dollar_bill_remainder / TEN_DOLLAR_BILL_VALUE;
    printf("$10 bills: %d\n", ten_dollar_bill_amount);

    int ten_dollar_bill_remainder = twenty_dollar_bill_remainder - ten_dollar_bill_amount * TEN_DOLLAR_BILL_VALUE;
    int five_dollar_bill_amount = ten_dollar_bill_remainder / FIVE_DOLLAR_BILL_VALUE;
    printf("$5 bills: %d\n", five_dollar_bill_amount);

    int five_dollar_bill_remainder = ten_dollar_bill_remainder - five_dollar_bill_amount * FIVE_DOLLAR_BILL_VALUE;
    int one_dollar_bill_amount = five_dollar_bill_remainder / ONE_DOLLAR_BILL_VALUE;
    printf("$1 bills: %d\n", one_dollar_bill_amount);

    return 0;
}