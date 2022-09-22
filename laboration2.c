#include <stdio.h>
#include <stdlib.h>

void viewMeasuserments();
void enterMeasurement();
void computeMeasurements();
void computeMinValue();
void computeMaxValue();
void computeAverageValue();
void computeNormalisedValue();
void resetValue();

int main(){
    
    printf("Measurement tool 1.0\n");
    char keyPressed;

    while (keyPressed != 'q'){
        printf("VECRQ? ");
        scanf(" %c", &keyPressed);
        switch (keyPressed){
        case 'v':
            //viewMeasuserments();
            break;
        case 'e':
            break;
        case 'c':
            //computeMeasurements();
            break;
        case 'r':
            break;
        case 'q':
            printf("Exit measurement tool");
            break;
        default:
            printf("Vänligen klicka någon av ovanstående knappar!");
            break;
            printf("\n");
        }
    }
    return 0;
}

void enterMeasurement(){

}

