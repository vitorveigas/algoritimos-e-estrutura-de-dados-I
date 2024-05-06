#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rolarDado(){
    return rand() % 6 + 1; // Gera um numero aleatorio entre 1 e 6
}

int calcularSoma(int dado1, int dado2){
    return dado1 + dado2;
}

void salvarJogada(int jogador, int dado1, int dado2, int soma){
    FILE *fp;
    fp = fopen("jogadas.txt", "a");
    if(fp == NULL){
        printf("Erro ao abrir o arquivo!\n");
        return;
    }
    fprintf(fp, "Jogador %d: %d + %d = %d\n", jogador, dado1, dado2, soma);
    fclose(fp);
}

int main(){
   int jogador1[2], jogador2[2];
   int somaJogador1, somaJogador2;
   char jogarNovamente;
   
   srand(time(NULL)); // Semente para a função rand()

   do{
       printf("Jogador 1, pressione ENTER para rolar os dados.\n");
       getchar(); // Espera o jogador 1 pressionar enter
       jogador1[0] = rolarDado(); //Lança o primeiro dado do jogador 1
       jogador1[1] = rolarDado(); //Lança o segundo dado do jogador 1
       printf("Jogador 1: %d + %d\n", jogador1[0], jogador1[1]);
       somaJogador1 = calcularSoma(jogador1[0], jogador1[1]);
       printf("A soma do jogador 1: %d\n", somaJogador1);
       salvarJogada(1, jogador1[0], jogador1[1], somaJogador1);
       
       printf("Jogador 2, pressione ENTER para rolar os dados.\n");
       getchar(); // Espera o jogador 2 pressionar enter
       jogador2[0] = rolarDado(); // Lança o primeiro dado do jogador 2
       jogador2[1] = rolarDado(); // Lança o segundo  dado do jogador 2
       printf("Jogador 2: %d + %d\n", jogador2[0], jogador2[1]);
       somaJogador2 = calcularSoma(jogador2[0], jogador2[1]);
       printf("A soma do jogador 2: %d\n", somaJogador2);
       salvarJogada(2, jogador2[0], jogador2[1], somaJogador2);
       
       if(somaJogador1 > somaJogador2){
           printf("\nO jogador 1 venceu!\n");
       }else if(somaJogador2 > somaJogador1){
           printf("\nO jogador 2 venceu!");
       }else{
           printf("\nEmpatou ! Vamos jogar novamente.\n");
       }

       printf("Deseja jogar novamente? (S/N)\n");
       scanf(" %c", &jogarNovamente);
       getchar(); // Limpa o buffer do teclado
   }while(jogarNovamente == 'S' || jogarNovamente == 's');
   
   return 0;
}
