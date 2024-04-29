/******************************************************************************
Nome: Vitor Veiga Silva                                                       
Data: 29/04/2024
Projeto: prj_array_exer2
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
       // declaração da matriz
       
       int matriz[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
       int soma = 0;
       
       for(int i = 0; i < 3; i++){ //percorre as linhas
           for(int j = 0; j < 3; j++){ //percorre as colunas
               soma = soma + matriz[i][j];
           }
       }
       printf("A soma dos elementos da matriz é: %d", soma);
       
       return 0;
}
