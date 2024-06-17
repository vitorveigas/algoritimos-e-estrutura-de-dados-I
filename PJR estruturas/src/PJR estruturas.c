//ogro

	#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 0 || N > 10) {
        printf("Número fora do intervalo permitido.\n");
        return 1;
    }

    int esquerda = (N <= 5) ? N : 5;
    int direita = (N <= 5) ? 0 : N - 5;

    // Representação da mão esquerda
    for (int i = 0; i < esquerda; i++) {
        printf("I");
    }
    for (int i = esquerda; i < 5; i++) {
        printf("*");
    }
    printf("\n");

    // Representação da mão direita
    for (int i = 0; i < direita; i++) {
        printf("I");
    }
    for (int i = direita; i < 5; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
    
}

// robo 
#include <stdio.h>

// Função para verificar se a próxima posição está dentro dos limites do salão e é um ladrilho preto
int isValid(int x, int y, int L, int C, int map[L][C]) {
    return x >= 0 && x < L && y >= 0 && y < C && map[x][y] == 1;
}

// Função principal para encontrar a posição final do robô
void findFinalPosition(int L, int C, int startX, int startY, int map[L][C], int *finalX, int *finalY) {
    int x = startX;
    int y = startY;
    int dx[] = {-1, 1, 0, 0}; // Mudanças na linha: Norte, Sul
    int dy[] = {0, 0, -1, 1}; // Mudanças na coluna: Oeste, Leste
    
    // Enquanto houver um próximo ladrilho preto válido
    while (1) {
        int moved = 0;
        for (int i = 0; i < 4; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];
            if (isValid(newX, newY, L, C, map)) {
                map[x][y] = 0; // Marca o ladrilho atual como visitado
                x = newX;
                y = newY;
                moved = 1;
                break;
            }
        }
        if (!moved) {
            // Não há mais movimentos possíveis
            break;
        }
    }
    *finalX = x + 1; // Ajustando para contagem a partir de 1
    *finalY = y + 1; // Ajustando para contagem a partir de 1
}

int main() {
    int L, C;
    
    // Leitura das dimensões do salão
    scanf("%d %d", &L, &C);
    
    int A, B;
    
    // Leitura da posição inicial do robô
    scanf("%d %d", &A, &B);
    A--; // Ajustando para índice base 0
    B--; // Ajustando para índice base 0
    
    int map[L][C];
    
    // Leitura do mapa
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &map[i][j]);
        }
    }
    
    int finalX, finalY;
    
    // Encontrar a posição final
    findFinalPosition(L, C, A, B, map, &finalX, &finalY);
    
    // Imprimir a posição final
    printf("%d %d\n", finalX, finalY);
    
    return 0;
}

// tenis

#include <stdio.h>

int main() {
    char resultado;
    int vitorias = 0;

    // Leitura dos resultados dos 6 jogos
    for (int i = 0; i < 6; i++) {
        scanf(" %c", &resultado);
        if (resultado == 'V') {
            vitorias++;
        }
    }

    // Determinação do grupo com base no número de vitórias
    if (vitorias == 5 || vitorias == 6) {
        printf("1\n");
    } else if (vitorias == 3 || vitorias == 4) {
        printf("2\n");
    } else if (vitorias == 1 || vitorias == 2) {
        printf("3\n");
    } else {
        printf("-1\n");
    }

    return 0;
}
