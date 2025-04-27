#include <stdio.h>

int main(){
    
    float salario, parcela;
    
    printf("digite o valor do salario: ");
    scanf("%f", &salario);
    
    printf("informe o valor da parcela: ");
    scanf("%f", &parcela);
    
    if (parcela > (salario/100)*0.20){
        printf("o emprestimo nao pode acontecer");
    }
    else{
        printf("o emprestimo pode acontecer");
    }
    
}