/******************************************************************************

Autor: Vitor Veiga Silva
Data: 27/05/2024
Nome: Contar elementos iguais dentro de um array.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int contarElemento(int array[], int elemento, int tamanho){
    if (tamanho == 0){
        return 0;
    }
    int ocorrencias = contarElemento(array, elemento, tamanho - 1);
    if(array[tamanho-1] == elemento){
        ocorrencias++;
    }
    return ocorrencias;
}

    int main(void) {
    int arr[] = {1, 2, 4, 4, 4,}; 
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    //printf("Tamanho de: %d", tamanho);
    int resultado = contarElemento(arr, 4, tamanho);
    printf("Quantidade de aparições do elemento: %d\n", resultado);
    return 0;
}
