#include <stdio.h>

#define TAMANHO 10
#define TAM_NAVIO 3
#define NAVIO 3
#define AGUA 0

int main() {

    int tabuleiro[TAMANHO][TAMANHO];
    
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    int navio_horizontal[TAM_NAVIO] = {NAVIO, NAVIO, NAVIO};
    int navio_vertical[TAM_NAVIO] = {NAVIO, NAVIO, NAVIO};

    int linha_horizontal = 2;
    int coluna_horizontal = 4;

    int linha_vertical = 5;
    int coluna_vertical = 7;

    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linha_horizontal][coluna_horizontal + i] = navio_horizontal[i];
    }

    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linha_vertical + i][coluna_vertical] = navio_vertical[i];
    }

    printf("=== Tabuleiro Batalha Naval ===\n\n");

    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}