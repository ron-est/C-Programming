#include <stdio.h>

int main(void) {
    // first declaration states that height is a property of int
    int height;
    int length;
    int width;
    int volume;

    // This declaration states that profit is a variable of type float
    float profit;

    // Variable can be given a value by means of assignment
    // Note that a variable must be declared before being assigned
    height = 8;

    // A constant assigned to a float variable usually contrains a decimal point
    profit = 2150.48f;

    // Once a variable has been assigned a value, it
    // can be used to help compute the value of another variable
    length = 12;
    width = 10;
    volume = height * length * width;

    printf("Height: %d\n", height);
    printf("Volume: %d\n", volume);
    // By default, %f displays a number with six digits after a decimal point
    // we can put .p after the % to limit the number of digits
    printf("Profit: $%.2f\n", profit);
    return 0;
}