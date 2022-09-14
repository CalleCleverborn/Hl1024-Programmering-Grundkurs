#include <stdio.h>
int main()
{
    int siffra;
    printf("Skriv in en siffra?\n");
    scanf("%d", &siffra);

    if (siffra < 50)
    {
        printf("Mindre än 50");
    }
    if (siffra > 50)
    {
        printf("Större än 50");
    }
    if (siffra == 50)
    {
        printf("Siffran är 50");
    }
    return 0;
}