#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numberx[10];
    int numbery[10];

    for (int i = 1; i < 10; i++)
    {
        numberx[i] = i;
        printf("%d", numberx[i]);

        for (int j = 1; j < 10; j++)
        {
            numbery[j] = j;
            printf("%d", numbery[j]);
            printf("\n");
        }
    }

    return 0;
}