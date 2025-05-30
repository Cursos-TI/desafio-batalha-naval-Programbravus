#include <stdio.h>

#define TAMANHO_TABULEIRO 10

void inicializarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0; // Inicializa com 0 (área não afetada)
        }
    }
}

void aplicarCone(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 5; i < 10; i++) {
        for (int j = 10 - i; j <= i; j++) {
            tabuleiro[i][j] = 1;
        }
    }
}

void aplicarOctaedro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 3; i <= 6; i++) {
        for (int j = 5 - (i - 3); j <= 5 + (i - 3); j++) {
            tabuleiro[i][j] = 1;
        }
    }
    for (int i = 7; i <= 9; i++) {
        for (int j = 5 - (9 - i); j <= 5 + (9 - i); j++) {
            tabuleiro[i][j] = 1;
        }
    }
}

void aplicarCruz(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        tabuleiro[i][5] = 1;
        tabuleiro[5][i] = 1;
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
    printf("\nHabilidade: Cone\n");
    aplicarCone(tabuleiro);
    exibirTabuleiro(tabuleiro);

    inicializarTabuleiro(tabuleiro);
    printf("\nHabilidade: Octaedro\n");
    aplicarOctaedro(tabuleiro);
    exibirTabuleiro(tabuleiro);

    inicializarTabuleiro(tabuleiro);
    printf("\nHabilidade: Cruz\n");
    aplicarCruz(tabuleiro);
    exibirTabuleiro(tabuleiro);

    return 0;
}
