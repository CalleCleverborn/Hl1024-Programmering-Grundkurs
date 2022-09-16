#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#define HELTAL 10

void writeArr(int arr[], int heltal);
void placeArr(int arr[], int heltal);
void sortArr(int arr[], int heltal);

int main()
{
    int arr[HELTAL] = {0};
    placeArr(arr, HELTAL);
    sortArr(arr, HELTAL);
    writeArr(arr, HELTAL);

    return 0;
}

void placeArr(int arr[], int heltal)
{
    srand(time(NULL));
    for (int i = 0; i < heltal; i++)
    {
        arr[i] = rand() % 21 - 10;
    }
}

void sortArr(int arr[], int heltal)
{
    int tmp;
    int i;
    int j;

    for (i = 0; i < HELTAL - 1; i++)
    {
        for (j = 0; j < HELTAL - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void writeArr(int arr[], int heltal)
{

    for (int i = 0; i < heltal; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

