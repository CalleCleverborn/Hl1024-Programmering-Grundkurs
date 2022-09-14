#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    float throttle;
    float h = 250.0;
    float v = -25.0;
    float b = 500.0;
    int time = 0;

    printf("\nLunar decent challenge!\nYou will pilot a lunar decent the last 250m.\nEach turn represent 1-second decent time.\nSet the throttle for each turn (0-100)\n\n");

    printf("Tid: %d s | ", time);
    printf("Hojd: %.2f m | ", h);
    printf("Hastighet: %.2f m/s | ", v)

    while (h >= 0)
    {
        printf("Throttle: ");
        scanf("%f", &throttle);
        printf("\n");

        h = h + v + (0.1 * throttle - 1.5) / 2;

        v = v + (0.1 * throttle - 1.5);

        time = time + 1;

        printf("Tid: %d s | ", time);
        printf("Hojd: %.2f m | ", h);
        printf("Hastighet: %.2f m/s | ", v);

    }

    if (v < -2.0 && h <= 0)
    {
        printf("\n\n");
        printf("FAILED! Crash landing at %.2f m/s", v);
    }

    else if (v > -2.0 && h <= 0)
    {
        printf("\n\n");
        printf("SUCCESS! Landing at %.2f m/s with %.2f kg fuel to spare", v, b);
    }

    return 0;
}