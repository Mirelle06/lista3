#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("O nadador é infantil A\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("O nadador é infantil B\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("O nadador é juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("O nadador é juvenil B\n");
    } else if (idade >= 18) {
        printf("O nadador é sênior\n");
    } else {
        printf("Idade fora da faixa de classificação.\n");
    }

}