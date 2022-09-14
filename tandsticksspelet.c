#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int playerAmountOfSticks, computerAmountOfSticks;
    int totalSticks = 15;

    bool playerWins = false;
    bool computerWins = false;

    while (playerWins == false && computerWins == false)
    {
        for (int i = totalSticks; i > 0; i--)
        {
            printf("| ");
        }
        
        printf("\n\n");
        printf("Hur manga stickor vill du plocka? (1-3): ");
        scanf("%d", &playerAmountOfSticks);

        if (playerAmountOfSticks < 4 && playerAmountOfSticks > 0)
        {
            totalSticks = totalSticks - playerAmountOfSticks;
        }

        else
        {
            printf("Vanligen forsok igen med ratt antal stickor! (1-3)");
        }

         if (totalSticks <= 0)
        {
            playerWins = true;
            printf("Grattis! Du vann mot datorn!");
            break;
        }

        computerAmountOfSticks = (rand() % (3 - 1 + 1)) + 1;
        totalSticks = totalSticks - computerAmountOfSticks;

        if(totalSticks <= 0){
            computerWins = true;
            printf("Nej! Datorn vann...");
            
            break;
        }

        printf("\n\n");
        printf("Datorn tog %d stickor\n\n", computerAmountOfSticks);
    }

    return 0;
}