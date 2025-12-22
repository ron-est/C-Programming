/* Write a program that declares several int and float variables--
without initializing them--and then prints their values. 
Is there any pattern to the values? (usually there isn't) */

#include <stdio.h>

int main(void)
{
    int height, width, length;
    float price, tax, interest;
    printf("Height: %d, Width: %d, Length: %d\n", height, width, length);
    printf("Price: %f, Tax: %f, Interest: %f\n", price, tax, interest);

    return 0;
}