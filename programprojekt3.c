#include <stdio.h>

int main()
{
    int radius;
    float pi = 3.14;
    float volume;
    
    printf("Enter the radius of the sphere: ");
    scanf("%d", &radius);

    volume = (4.0f/3.0f) * pi * radius * radius * radius;

    printf("%f", volume);

    return 0;
}