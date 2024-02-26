/*
 ============================================================================
 Name        : prj_helloworld.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main (void) {

	int idade = 26;
	const int MAX_NUM = 100;

	printf("Minha variável int comum = %d\n", idade);
	printf("Minha variável int constante = %d\n", MAX_NUM);
	printf("Minha constante = %f\n", PI);



	return EXIT_SUCCESS;
}

