/******************************************************************************
Autor: Vitor Veiga Silva
Data: 20/05/2024
Nome: Chamada recursiva para calcular a soma dos dígitos de um número                          
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// Função recursiva para calcular a soma dos dígitos de um número
int somaDosDigitos(int n) {
    if (n == 0)
    return 0;
    else
        return (n % 10) + somaDosDigitos(n / 10);
}



int main() {
    int numero = 12345;
    int resultado = somaDosDigitos(numero);
    printf("A soma dos dígitos de %d é %d\n", numero, resultado);
    return 0;
    }
