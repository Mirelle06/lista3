#include <stdio.h>

int main () {

    int x, y;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);

    if ( x > y ) {

        printf("o %d e maior", x);

    }
    else if ( x < y) {

        printf("o %d e maior", y);
    }
}