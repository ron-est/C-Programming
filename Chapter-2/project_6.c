// Recreate Project 5 using Horner's Rule

#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter a value for x: \n");
    scanf("%d", &x);

    int polynomial = (((( 3 * x + 2 ) * x - 5 ) * x - 1 ) * x + 7 ) * x - 6;
    printf("Output %d\n", polynomial);

    return 0;
}