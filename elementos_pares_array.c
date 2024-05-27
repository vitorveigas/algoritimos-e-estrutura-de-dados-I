/******************************************************************************

Autor: Vitor Veiga Silva
Data: 27/05/2024
Nome: Verificar se todos os elementos dentro de um array são pares.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int saoPares(int array[], int tamanho, int index) {
    if(index == tamanho){
        return 1;
    }
    if(array[index] % 2 != 0){
        return 0;
    }
        return saoPares(array, tamanho, index + 1);
}

int main (){
    int arr[] = {2, 4, 6, 8, 10};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int index;
    
    int resultado = saoPares(arr, tamanho, 0);
    if(resultado == 1){
    printf("Todos elementos do array são pares");
}else{
    printf("Um ou mais elementos do array não são pares");
}
    return 0;
}

