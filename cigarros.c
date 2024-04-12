#include <stdio.h>
#include <stdlib.h>

int main() {
    int anos_fumando;
    float cigarros_por_dia, preco_maco, total_gasto;

    // Solicitar informações ao usuário
    printf("Quantos anos você fuma? ");
    scanf("%d", &anos_fumando);

    printf("Quantos cigarros você fuma por dia? ");
    scanf("%f", &cigarros_por_dia);

    printf("Qual o preço médio de um maço de cigarros? ");
    scanf("%f", &preco_maco);

    // Calcular quantidade total de cigarros fumados
    float total_cigarros = anos_fumando * 365 * cigarros_por_dia;

    // Calcular total gasto
    total_gasto = (total_cigarros / 20) * preco_maco;

    // Exibir resultado
    printf("Você gastou um total de R$ %.2f ao longo da vida com cigarros.\n", total_gasto);

    return 0;
}
