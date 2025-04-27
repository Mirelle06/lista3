int main(){
    
    int a, b, c, operaçao;
    
    printf("\nEscolha o tipo de operaçao:\n");
    printf("1 - soma\n");
    printf("2 - subtraçao\n");
    printf("3 - Multiplicaçao\n");
    printf("4 - divisao\n");
    printf("Digite a opcao desejada (1-4): ");
    scanf("%d", &operaçao);
    
    printf("digite dois numeros para a operaçao: ");
    scanf("%d %d", &a, &b);
    
    switch (operaçao){
        case 1:
           c = a + b;
           printf("a soma deu %d", c);
           break;
        case 2:
           c = a - b;
           printf("a subtraçao deu %d", c);
           break;
        case 3:
           c = a * b;
           printf("a multiplicaçao deu %d", c);
           break;
        case 4:
           c = a / b;
           printf("a divisao deu %d", c);
           break;
    }
    

    

}