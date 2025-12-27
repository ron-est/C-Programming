// Example code in Section 3.1

#include <stdio.h>

int main(void)
{
    int i, j;
    float x, y;

    i = 10;
    j = 20;
    x = 43.2892f;
    y = 5527.0f;

    // The ordinary characters in the format string are simply copied to the output line
    // The four conversion specifications are replaced by the values of the variables i, j, x, and y, in that order
    printf(" i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

    // Escape Sequences
    // Alert (bell) \a
    // Backspace \b
    // New line \n
    // Horizontal tab \t
    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");

    // \" represents the " character
    printf("\"Hello!\"\n");

    // To print a single \ character, put two \ characters in the string
    printf("\\\n");

    return 0;
}