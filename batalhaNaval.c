#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO_VERTICAL 3
#define TAMANHO_NAVIO_HORIZONTAL 4

int main() {
    // Definição das coordenadas dos navios
    int navio_vertical[TAMANHO_NAVIO_VERTICAL][2] = {
        {2, 3}, {3, 3}, {4, 3}  // Verticalmente na coluna 3
    };

    int navio_horizontal[TAMANHO_NAVIO_HORIZONTAL][2] = {
        {6, 1}, {6, 2}, {6, 3}, {6, 4}  // Horizontalmente na linha 6
    };

    // Exibindo as coordenadas do navio vertical
    printf("Coordenadas do Navio Vertical:\n");
    for (int i = 0; i < TAMANHO_NAVIO_VERTICAL; i++) {
        printf("(%d, %d)\n", navio_vertical[i][0], navio_vertical[i][1]);
    }

    // Exibindo as coordenadas do navio horizontal
    printf("\nCoordenadas do Navio Horizontal:\n");
    for (int i = 0; i < TAMANHO_NAVIO_HORIZONTAL; i++) {
        printf("(%d, %d)\n", navio_horizontal[i][0], navio_horizontal[i][1]);
    }

    return 0;
}
