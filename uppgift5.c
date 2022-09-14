#include <stdio.h>
int main()
{
    int bredd;
    int hojd;

    printf("Ange en bredd: ");
    scanf("%d", &bredd);
    printf("Ange en hojd: ");
    scanf("%d", &hojd);

    for (int i = 1; i <= hojd; i++)
    {
        printf("\n");
        for (int h = 1; h <= bredd; h++)
        {
            if (i == 1 || h == 1 || i == hojd || h == bredd)
                printf("* ");
            else
                printf("  ");
        }
    }
    return 0;
}