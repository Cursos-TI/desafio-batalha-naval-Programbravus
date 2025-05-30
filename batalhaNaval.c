
#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define NAVIO 3 // Representa um navio no tabuleiro
#define VAZIO 0 // Representa espaço sem navio

void inicializarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = VAZIO;
        }
    }
}

void posicionarNavios(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    // Navio vertical na coluna 2
    for (int i = 2; i < 5; i++) {
        tabuleiro[i][2] = NAVIO;
    }

    // Navio horizontal na linha 6
    for (int j = 4; j < 8; j++) {
        tabuleiro[6][j] = NAVIO;
    }

    // Navio diagonal crescente (subindo à direita)
    for (int i = 0; i < 4; i++) {
        tabuleiro[5 - i][4 + i] = NAVIO;
    }

    // Navio diagonal decrescente (descendo à direita)
    for (int i = 0; i < 3; i++) {
        tabuleiro[7 + i][2 + i] = NAVIO;
    }
}

void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    inicializarTabuleiro(tabuleiro);
    posicionarNavios(tabuleiro);
    exibirTabuleiro(tabuleiro);

    return 0;
}

