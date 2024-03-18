/*
 ============================================================================
 Name        : pjr_tarefa_2.c
 Author      : Vitor Veiga Silva
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// Função para mostrar os números pares múltiplos de 3 até 1000
void mostrarNumerosParesMultiplosDeTres() {
	int cont = 0;
	printf("Números pares múltiplos de 3 até 1000:\n");
	for (int i = 2; i <= 1000; i += 2) {
		if (i % 3 == 0) {
			printf("%d ", i);
			cont++;
		}
	}
	printf("\nTotal de números pares múltiplos de 3: %d\n\n", cont);
	printf("\nTotal de números pares múltiplos de 3: %d\n\n");
}

//Função para ler 10 números inteiros, calcular soma e média

void calcularSomaEMedia() {
	int numero;
	int soma = 0;

	printf("Digite 10 números inteiros:\n");
	fflush(stdout);
	for (int i = 0; i < 10; i++) {
		scanf("%d", &numero);
		soma += numero;
	}
	double media = soma / 10;

	printf("Soma: %d\n", soma);
	printf("Media: %.2lf\n", media);
}

void calcularAreaDosComodos() {
	double largura, comprimento, area, areaTotal;

	fflush(stdout);

	for (int i = 1; i <= 4; i++) {
		printf("Digite a largura do comodo: %d", i);
		scanf("%lf, &largura");

		printf("Digite o comprimento do comodo:%d", i);
		scanf("%lf, &comprimento");

		area = largura * comprimento;
		areaTotal = areaTotal += area;

		printf("A area do comodo %d é %.2lf metros quadrados\n", i, area);
	}
	printf("A area total é :%.2lf", areaTotal);
}

//4
void calcPerimetroAreaCirc() {
	double raio, perimetro, area;

	fflush(stdout);

	const double pi = 3.14;

	printf("Digite o calor do raio do círculo:");
	scanf("%lf", &raio);

	perimetro = 2 * pi * raio;
	area = pi * raio * raio;

	printf("Perimetro do círculo: %.2lf\n", perimetro);
	printf("Área do círculo: %.2lf\n", area);
}



int main(void) {
	mostrarNumerosParesMultiplosDeTres();

	calcularSomaEMedia();

	calcularAreaDosComodos();

	calcPerimetroAreaCirc();

	return 0;

}
