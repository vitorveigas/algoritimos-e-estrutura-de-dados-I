#include <stdio.h>
#include <stdlib.h>


int determinar_grupo(char resultados[6]) {
    int vitorias = 0;
    
  
    for (int i = 0; i < 6; i++) {
        if (resultados[i] == 'V' || resultados[i] == 'v') {
            vitorias++;
        }
    }
    
   
    if (vitorias >= 5) {
        return 1;
    } else if (vitorias >= 3) {
        return 2;
    } else if (vitorias >= 1) {
        return 3;
    } else {
        return -1; 
    }
}

int main() {
    char resultados[6];
    
    for (int i = 0; i < 6; i++) {
        scanf(" %c", &resultados[i]); 
    }
    
    
    int grupo = determinar_grupo(resultados);
    
   
    printf("%d\n", grupo);
  
   
    return 0;
}
