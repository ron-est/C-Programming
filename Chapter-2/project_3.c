// Write a program that asks the user to enter a dollars-and-cents amount
// Then displays the amount with 5% tax added

#include <stdio.h>
#define TAX 0.05f

int main(void)
{
    float amount;

    printf("Enter an amount: \n");
    scanf("%f", &amount);
    float total = TAX * amount + amount;
    printf("With tax added: %.2f\n", total);
    return 0;
}