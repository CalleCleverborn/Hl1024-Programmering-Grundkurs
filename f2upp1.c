#include <stdio.h>
int main()
{
    int antalskivor;
    float kostnad;

    printf("Hur många skivor vill du köpa?: ");
    scanf("%d", &antalskivor);

    if(antalskivor < 11){
        kostnad = antalskivor * 9.9;
        printf("Kostnaden blev %.2f kr", kostnad);
    }

    else if(antalskivor < 51){
        kostnad = antalskivor * 9.9 * 0.95;
        printf("Kostnaden blev %.2f kr, du fick även 5 procent rabatt!", kostnad);
    }

    else{
        kostnad = antalskivor * 9.9 * 0.90;
        printf("Kostnaden blev %.2f kr, du fick även 10 procent rabatt!", kostnad);
    }

    return 0;
    
}