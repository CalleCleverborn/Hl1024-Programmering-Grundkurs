#include <stdio.h>

int main()
{
    int radius = 10;
    float pi = 3.14;
    float volume;
    
    volume = (4.0f/3.0f) * pi * radius * radius * radius;

    printf("%f", volume);

    return 0;
}