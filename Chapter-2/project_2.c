/* Write a program that computes the volume of a sphere with a 10-meter radius */
/* After, modify it so that it prompts the user to enter the radius of the sphere */

#include <stdio.h>

#define PI 3.14f
#define SPHERE_RATIO (4.0f / 3.0f)

int main(void)
{
    float radius;

    printf("Enter radius of the sphere: \n");
    scanf("%f", &radius);
    float volume = SPHERE_RATIO * PI * radius * radius * radius;
    printf("Volume: %.2f\n", volume);
    return 0;
}