/*
 ============================================================================
 Name        : prj_tarefa_3.c
 Author      : Vitor Veiga Silva
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Para auxiliar a função rand

int main (void) {

	srand(time(NULL));

	int numSorteado = rand() % 101;

	printf("Loteria");
	printf("\nEscolha um número entre 0 e 100: ");
	int numEscolhido;
	scanf("%d", &numEscolhido);

	if(numEscolhido == numSorteado){
		printf("\nVocê ganhou!");
	}else{
		printf("\nVocê perdeu! O número sorteado foi: %d", numSorteado);
	}

	  return 0;

}



