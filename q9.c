#include <stdio.h>

int main(){

    float altura, peso;

    printf("digite a altura e o peso: ");
    scanf("%f %f", &altura, &peso);

    if(altura < 1.20){

        if(peso <= 60){
            printf("categoria A");
        }
        else if (peso > 60 && peso <= 90){
            printf("categoria D");
        
        }
        else {
            printf("categoria G");
        }

    }

    else if(altura >= 1.20 && altura < 1.70 ){ 
        if(peso <= 60){
            printf("categoria B");
        }
        else if (peso > 60 && peso <= 90){
            printf("categoria E");
        
        }
        else {
            printf("categoria H");
        }
    }

    else{
        if(peso <= 60){
            printf("categoria C");
        }
        else if (peso > 60 && peso <= 90){
            printf("categoria F");
        
        }
        else {
            printf("categoria I");
        }

    }
}