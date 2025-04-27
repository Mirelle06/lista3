#include <stdio.h>
#include <math.h>

int main(){
    
    int a, b, c, opcao;
    float media;
    
    printf("digite o primeiro numero inteiro: ");
    scanf("%d", &a);
    
    printf("digite o segundo numero inteiro: ");
    scanf("%d", &b);
    
    printf("digite o terceiro numero inteiro: ");
    scanf("%d", &c);
    
    printf("\nEscolha o tipo de media:\n");
    printf("1 - Media Geometrica\n");
    printf("2 - Media Ponderada (pesos 1, 2 e 3)\n");
    printf("3 - Media Harmonica\n");
    printf("4 - Media Aritmetica\n");
    printf("Digite a opcao desejada (1-4): ");
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1:
            media = cbrt(a * b * c); 
            printf("Media Geometrica: %f\n", media);
            break;
        case 2:
            media = (a * 1 + b * 2 + c * 3) / 6.0;
            printf("Media Ponderada: %f\n", media);
            break;
        case 3:
            media = 3.0 / ((1.0/a) + (1.0/b) + (1.0/c));
            printf("Media Harmonica: %f\n", media);
            break;
        case 4:
            media = (a + b + c) / 3.0;
            printf("Media Aritmetica: %f\n", media);
            break;
        default:
            printf("Opcao invalida!\n");
    }
   
}