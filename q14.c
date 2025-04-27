#include <stdio.h>

int main() {
    int a;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &a);

    if (a > 0) {
        if (a % 3 == 0 && a % 5 == 0) {
            printf("O numero é divisível por 3 e por 5\n");
        } else if (a % 3 == 0) {
            printf("O numero é divisível por 3\n");
        } else if (a % 5 == 0) {
            printf("O numero é divisível por 5\n");
        } else {
            printf("O numero não é divisível por 3 nem por 5\n");
        }
    } else {
        printf("Por favor, digite um numero positivo.\n");
    }

}