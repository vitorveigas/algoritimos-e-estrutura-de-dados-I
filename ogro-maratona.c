#include <stdio.h>
#include <stdlib.h>


int main() {
    int N;
    printf("Digite o numero de dedos do ogro: \n");
    scanf("%d", &N);

    if (N < 0 || N > 10) {
        printf("Número fora do intervalo permitido.\n");
        return 1;
    }

    int esquerda = (N <= 5) ? N : 5;
    int direita = (N <= 5) ? 0 : N - 5;

    
    for (int i = 0; i < esquerda; i++) {
        printf("I");
    }
    for (int i = esquerda; i < 5; i++) {
        printf(" ");
    }
    printf("\n");

   
    for (int i = 0; i < direita; i++) {
        printf("I");
    }
    for (int i = direita; i < 5; i++) {
        printf(" ");
    }
    printf("\n");

    return 0;
    
}
