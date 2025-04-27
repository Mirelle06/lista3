#include <stdio.h>
#include <math.h>

int main(){
    
    float h, peso;
    char sexo;
    
    printf("digite sua altura: ");
    scanf("%f", &h);
    
    printf("digite seu sexo com M ou F: ", sexo);
    scanf(" %c", &sexo);
    
    if (sexo == 'M'){
        peso = (72.2*h) - 58;
        
        printf("o peso ideal de um homem com %f de altura e = %f", h, peso);
    }
    else if (sexo == 'F'){
        peso = (62.1*h) - 44.7;
        
        printf("o peso ideal de uma mulher com %f de altura e = %f", h, peso);
    }
}