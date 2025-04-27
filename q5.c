#include <stdio.h>
#include <math.h>

int main(){
    
    int x, y, raiz;
    
    printf("digite um numero: ");
    scanf("%d", &x);
    
    if (x > 0){
        y = x*x;
        raiz = sqrt(x);
        
        printf("o numero ao quadrado e: %d\n", y);
        printf("a raiz quadrada e: %d", raiz);
    }
    else{
        printf("o numero nao e positivo");
    }
}