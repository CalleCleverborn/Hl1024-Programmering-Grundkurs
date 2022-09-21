#include <stdio.h>
#include <stdlib.h>

void viewMeasuserments();
void enterMeasurement();
void computeMeasurements();
void computeMinValue();
void computeMaxValue();
void computeAverageValue();
void computeNormalisedValue();

int main(){
    printf("Measurement tool 1.0\n");

    char keyPressed;

    while(keyPressed != 'q'){
        printf("VECRQ? ");
        scanf(" %c", &keyPressed);

        if(keyPressed == 'v'){
            viewMeasuserments();
            
        }
        else if(keyPressed == 'e'){
            enterMeasurement();
            
        }
        else if(keyPressed == 'c'){
            computeMeasurements();
        }
        else if(keyPressed == 'r'){
            
        }
        else if(keyPressed == 'q'){
            
        }
        else
            printf("Vänligen klicka någon av ovanstående knappar!");
        
        printf("\n");
    }
    return 0;
}

void enterMeasurement(){

}