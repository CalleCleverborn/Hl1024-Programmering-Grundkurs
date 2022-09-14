#include <stdio.h>
int main()
{
    int n, m, small, gcd;

    printf("Skriv in två heltal: ");
    scanf("%d %d", &n, &m);
    
    if (n < m)
    {
        small = n;
    }
    else
    {
        small = m;
    }
    
    for (int i = 1; i <= small; i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            gcd = i;
        }
    }

    printf("GCD: %d", gcd);

    return 0;
}