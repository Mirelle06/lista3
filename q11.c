#include <stdio.h>
#include <math.h>

int main(){
    
    int numero;
    
    printf("digite um numero de 1 a 12: ");
    scanf("%d", &numero);
    
    switch(numero) {
        case 1:
           printf("o mes %d e janeiro!", numero);
           break;
       case 2:
           printf("o mes %d e fevereiro!", numero);
           break;
        case 3:
           printf("o mes %d e março!", numero);
           break;
        case 4:
           printf("o mes %d e abril!", numero);
           break;
        case 5:
           printf("o mes %d e maio!", numero);
           break;
        case 6:
           printf("o mes %d e junho!", numero);
           break;
        case 7:
           printf("o mes %d e julho!", numero);
           break;
        case 8:
           printf("o mes %d e agosto!", numero);
           break;
        case 9:
           printf("o mes %d e setembro!", numero);
           break;
        case 10:
           printf("o mes %d e outubro!", numero);
           break;
        case 11:
           printf("o mes %d e novembro!", numero);
           break;
        case 12:
           printf("o mes %d e dezembro!", numero);
           break;
        default:
           printf("esse numero nao esta na lista");
    }
}