/*
 ============================================================================
 Name        : 1.c
 Author      : Vitor Veiga Silva
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void validarSituacao(int idade, int altura, int sexo) {
	if (altura >= 180 && idade > 16) {
		if (sexo == 1) {
			printf("Apta a jogar no time Feminino Juvenil de Basquete.\n");
		} else if (sexo == 2) {
			printf("Apto a jogar no time Masculino Juvenil de Basquete. \n");
		} else {
			printf("Não apto. \n");
		}
	} else {
		printf("Não apto. \n");
	}
}

	 int main(void) {
		int idade, altura, sexo;

		printf("Digite a idade do candidato: ");
		scanf("%d", &idade);

		printf("Digite a altura do candidato: ");
		scanf("%d", &altura);

		printf("Digite a sexo do candidato: ");
		scanf("%d", &sexo);

		validarSituacao(idade, altura, sexo);

		return 0;

	}

