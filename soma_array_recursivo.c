/******************************************************************************

Autor: Vitor Veiga Silva
Data: 20/05/2024
Nome: Chamada recursiva para calcular a soma dos elementos do array
                          
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int somaArray(int arr[], int n) {
    if (n <= 0)
    return 0;
    return arr[n-1] + somaArray(arr, n-1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int resultado = somaArray(arr, tamanho);
    printf("A soma dos elementos do array é: %d\n", resultado);
    return 0;
}
