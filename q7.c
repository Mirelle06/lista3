#include <stdio.h>
#include <math.h>

int main(){
    
    float valor, precofinal;
    char estado;
    
    printf("digite o valor do produto: ");
    scanf("%f", &valor);
    
    printf("digite o estado, entre eles M pra MG, R pra RJ, S pra SP, G pra MS: ");
    scanf(" %c", &estado);
    
    if (estado == 'M'){
        precofinal = valor + (valor*0.07);
        
        printf("o valor com imposto acrescido pra MG e: %f", precofinal);
    }
    else if (estado == 'S'){
        precofinal = valor + (valor*0.20);
        
        printf("o valor com imposto acrescido pra SP e: %f", precofinal);
    }
    else if (estado == 'R'){
        precofinal =  valor + (valor*0.15);
        
        printf("o valor com imposto acrescido pra RJ e: %f", precofinal);
    }
    else if (estado == 'G'){
        precofinal = valor + (valor*0.08);
        
        printf("o valor com imposto acrescido pra MS e: %f", precofinal);
    }
    else{
        printf("esse estado nao existe");
    }
    
    
}