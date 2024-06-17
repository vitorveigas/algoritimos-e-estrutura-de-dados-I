#include <stdio.h>
#include <stdlib.h>

int ehValido(int x, int y, int L, int C, int mapa[L][C]) {
    return x >= 0 && x < L && y >= 0 && y < C && mapa[x][y] == 1;
}

void encontrarPosicaoFinal(int L, int C, int startX, int startY, int mapa[L][C], int *finalX, int *finalY) {
    int x = startX;
    int y = startY;
    int dx[] = {-1, 1, 0, 0}; 
    int dy[] = {0, 0, -1, 1}; 
    
    while (1) {
        int moveu = 0;
        for (int i = 0; i < 4; i++) {
            int novoX = x + dx[i];
            int novoY = y + dy[i];
            if (ehValido(novoX, novoY, L, C, mapa)) {
                mapa[x][y] = 0; 
                x = novoX;
                y = novoY;
                moveu = 1;
                break;
            }
        }
        if (!moveu) {
            break; 
        }
    }
    *finalX = x + 1; 
    *finalY = y + 1;
}

int main() {
    int L, C;
    
   
    scanf("%d %d", &L, &C);
    
    int A, B;
    
    
    scanf("%d %d", &A, &B);
    A--; 
    B--; 
    
    int mapa[L][C];
    
    
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &mapa[i][j]);
        }
    }
    
    int finalX, finalY;
    
    
    encontrarPosicaoFinal(L, C, A, B, mapa, &finalX, &finalY);
    
    
    printf("%d %d\n", finalX, finalY);
    
    return 0;
}
