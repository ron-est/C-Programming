// Prints int and float values in various formats

#include <stdio.h>

int main(void)
{
    int i;
    float x;

    i = 40;
    x = 839.21f;

    // %d - Displays i in decimal form, using a minimum amount of space
    // %5d - Displays i in decimal form, using a minimum of five characters. Since i requires only two characters, three spaces were added
    // %-5d - Displays i in decimal form, using a minimum of five characters; since the value of i doesn't require five characters, the spaces are added afterward (that is, i is left-justified in a field of length five)
    // %5.3d - Displays i in decimal form, using a minimum of five characters overall and a minimum of three digits. Since i is only two digits long, an extra zero was added to guarantee three digits
    printf("| %d | %5d | %-5d | %5.3d |\n", i, i, i, i);

    // %10.3f - Displays x in fixed decimal form, using 10 characters overall, with three decimals after the decimal point
    // %10.3e - Displays x in exponential form, using 10 characters overall, with three digits after the decimal point
    // %-10g - Displays x in either fixed decimal form or exponential form, using 10 characters overall
    printf("| %10.3f | %10.3e | %-10g |\n", x, x, x);

    return 0;
}