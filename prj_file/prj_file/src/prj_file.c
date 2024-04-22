/******************************************************************************
 Autor:  Vitor Veiga Silva
 Data:  22/04/2024
 Nome:  Projeto file
 *******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// Abre o arquivo para escrita
	FILE *arquivo = fopen("exemplo.txt", "w");

	if (arquivo != NULL) {
		fprintf(arquivo, "Hello, World\n");
		// Fecha o arquivo de escrita
		fclose(arquivo);
		printf("Texto gravado com sucesso.\n");
	} else {
		//Se houver erro na baertura do arquivo para escrita
		printf("Erro ao abrir o arquivo para escrita. \n");
		return 1; // Retorna um código de erro
	}
	// Abre o arquivo para leitura
	arquivo = fopen("exemplo.txt", "r");
	// Verifica se o arquivo foi aberto com sucesso para leitura
	if (arquivo != NULL) {
		char linha[100]; // DEFINE UM BUFFER PARA ARMAZENAR A LINHA LIDA

		// LÊ E IMPRIME CADA LINHA DO ARQUIVO
		while (fgets(linha, sizeof(linha), arquivo) != NULL) {
			printf("Conteúdo lido do arquivo: %s", linha);
		}
		// FECHA O ARQUIVO DE LEITURA
		fclose(arquivo);
	} else {
		//Se houver erro na abertura do arquivo para leitura
		printf("Erro ao abrir o arquivo para leitura.\n");
		return 1; // Retprma um código de erro
	}
}
