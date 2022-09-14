#include <stdio.h>
int main()
{

    int side, diagonal;

    printf("Skriv in langden pa kvadratens sida: ");
    scanf("%d", &side);

    for (int x = 1; x <= side; x++)
    {

        for (int y = 1; y <= side; y++)
        {

            if (x == 1 && y == 1 || x == y || x + y == side + 1)
            {
                printf("* ");
            }
            else
            {
                printf("+ ");
            }
        }
        printf("\n");
    }

    return 0;
}
