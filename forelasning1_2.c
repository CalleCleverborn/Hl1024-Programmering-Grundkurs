#include <stdio.h>
int main()
{
    int tid;
    int hastighet;

    printf("Hur lang tid(h)?: ");
    scanf("%d", &tid);
    printf("Hur fort(km/h)?: ");
    scanf("%d", &hastighet);

    int distans = tid * hastighet;

    printf("Om du fardas i %d h i hastigheten %d km/h kommer du %d km", tid, hastighet, distans);

    return 0;
}