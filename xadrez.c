#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Novato: Movimentação das Peças (Bispo, Torre e Rainha)
// Objetivo: Utilizar estruturas de repetição para simular a movimentação no tabuleiro.
// Saídas: "Cima", "Baixo", "Esquerda", "Direita"

int main() {
    // Constantes de movimentação
    const int BISPO_PASSOS = 5;   // Bispo anda 5 casas na diagonal superior direita
    const int TORRE_PASSOS = 5;   // Torre anda 5 casas para a direita
    const int RAINHA_PASSOS = 8;  // Rainha anda 8 casas para a esquerda

    int i; // variável de controle para os loops

    // ---------------------------------------------------
    // Implementação de Movimentação do Bispo
    // 5 casas na diagonal superior direita
    // Cada movimento é a combinação de "Cima" + "Direita"
    // ---------------------------------------------------
    printf("Movimento do Bispo:\n");
    for (i = 1; i <= BISPO_PASSOS; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // ---------------------------------------------------
    // Implementação de Movimentação da Torre
    // 5 casas para a direita
    // ---------------------------------------------------
    printf("Movimento da Torre:\n");
    i = 1;
    while (i <= TORRE_PASSOS) {
        printf("Direita\n");
        i++;
    }
    printf("\n");

    // ---------------------------------------------------
    // Implementação de Movimentação da Rainha
    // 8 casas para a esquerda
    // ---------------------------------------------------
    printf("Movimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= RAINHA_PASSOS);
    printf("\n");

    printf("--- Fim do Desafio de Xadrez (Nível Novato) ---\n");

    return 0;
}
