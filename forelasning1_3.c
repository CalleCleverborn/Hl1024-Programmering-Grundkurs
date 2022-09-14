#include <stdio.h>
int main(void)
{
    float r1, r2, rtot, rers;
    printf("Resistans hos R1 (ohm) : ");
    scanf("%f", &r1);
    printf("Resistans hos R2 (ohm) : ");
    scanf("%f", &r2);

    rtot = r1 * r2 / (r1 + r2);
    rers = r1 + r2;

    printf("Parallellkoppling: %.5f ohm\n", rtot);
    printf("Seriekoppling: %.5f ohm\n", rers);

    return 0;
}