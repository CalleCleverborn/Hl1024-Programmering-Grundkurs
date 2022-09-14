#include <stdio.h>

int main()
{
    int height = 8, lenght = 12, width = 10, volume;
    
    volume = height * lenght * width;

    printf("Dimensions: %dx%dx%dx\n", lenght, width, height);
    printf("Volume (cubic inches); %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);
    
    return 0;
}