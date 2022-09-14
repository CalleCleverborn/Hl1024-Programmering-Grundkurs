#include <stdio.h>

int main()
{
    int dollars, twenty , ten, five, one;
    
    printf("Enter dollar amount: ");
    scanf("%d", &dollars);

    twenty = dollars / 20;
    dollars = dollars - twenty*20;
    printf("Amount of twenty bills: %d", twenty);
    printf("\n");

    ten = dollars / 10;
    dollars = dollars - ten*10;
    printf("Amount of ten bills: %d", ten);
    printf("\n");
    
    five = dollars / 5;
    dollars = dollars - five*5;
    printf("Amount of five bills: %d", five);
    printf("\n");

    one= dollars / 1;
    dollars = dollars - one*1;
    printf("Amount of one bills: %d", one);
    printf("\n");

    return 0;
}