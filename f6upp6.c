#include <stdio.h>
#include <stdlib.h>

#define row 5
#define col 5

int main()
{
    int num[row][col];
    int totalRow[row] = {0}, totalCol[col] = {0};


    for (int i = 0; i < row; i++)
    {
        printf("Enter row %d: ", i + 1);
        scanf("%d %d %d %d %d", &num[i][0], &num[i][1], &num[i][2], &num[i][3], &num[i][4]);
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            totalRow[i] = totalRow[i] + num[i][j];
            totalCol[j] = totalCol[j] + num[i][j];
        }
    }

    printf("\nRow totals: ");
    for(int i = 0; i < row; i++){
        printf("%d ", totalRow[i]);
    }

    printf("\nColumn totals: ");
    for(int i = 0; i < col; i++){
        printf("%d ", totalCol[i]);
    }

    printf("\n");


    return 0;
}