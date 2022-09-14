#include <stdio.h>
#include <stdlib.h>

int main(){

    float num1, num2, result;
    char operator;

    printf("Ange tal 1: ");
    scanf("%f", &num1);
    
    printf("Ange +,-,/,*: ");
    scanf(" %c", &operator);
    
    printf("Ange tal 2: ");
    scanf("%f", &num2);
    

    if(operator=='+'){
        result = num1 + num2;
    }

    else if(operator=='-'){
        result = num1 - num2;
    }

    else if(operator=='/'){
        result = num1 / num2;
    }

    else{
        result = num1 * num2;
    }
        

    printf("%.2f%c%.2f=%.2f", num1, operator, num2, result);



    return 0;
}