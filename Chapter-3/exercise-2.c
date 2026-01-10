// Write calls of printf that display a float variable x in the following formats

#include <stdio.h>

int main(void)
{
    float test_number = 1234.567;
    // Exponential notation; left-justified in a field of size 8; one digit after the decimal point
    printf("%-8.1e\n", test_number);


    // Exponential notation; right-justtified in a field of size 10; six digits after the decimal point
    printf("%10.6e\n", test_number);

    // Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal point
    printf("%8.3d\n", test_number);

    // Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point
    printf("%6.0d\n", test_number);


    return 0;
}