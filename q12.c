int main(){
    
    int numero;
    
    printf("digite um numero de 1 a 7: ");
    scanf("%d", &numero);
    
    switch(numero) {
        case 1:
           printf("o dia %d e segunda!", numero);
           break;
       case 2:
           printf("o dia %d e terça!", numero);
           break;
        case 3:
           printf("o dia %d e quarta!", numero);
           break;
        case 4:
           printf("o dia %d e quinta!", numero);
           break;
        case 5:
           printf("o dia %d e sexta!", numero);
           break;
        case 6:
           printf("o dia %d e sabado!", numero);
           break;
        case 7:
           printf("o dia %d e domingo!", numero);
           break;
        default:
           printf("esse numero nao corresponde a um dia da semana");
           
}

}