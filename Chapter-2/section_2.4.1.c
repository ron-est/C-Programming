// Condense by replacing the assignments to height, length, and width with initializers
// Remove the weight variable, instead calculating (volume + 165) / 166 within the last printf

#include <stdio.h>

int main(void) {
    int height = 8, length = 12, width = 10, volume, weight;

    volume = height * length * width;

    printf("Dimenson: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);
    return 0;
}