#include <stdio.h>

#define N 10  // tamanho do tabuleiro

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para aplicar habilidade no tabuleiro
void aplicarHabilidade(int tabuleiro[N][N], int habilidade[5][5], int origemX, int origemY) {
    int tamanho = 5;
    int centro = tamanho / 2;

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (habilidade[i][j] == 1) {
                int x = origemX + (i - centro);
                int y = origemY + (j - centro);
                if (x >= 0 && x < N && y >= 0 && y < N) {
                    if (tabuleiro[x][y] == 0 || tabuleiro[x][y] == 3)
                        tabuleiro[x][y] = 5; // marca área afetada
                }
            }
        }
    }
}

int main() {
    int tabuleiro[N][N] = {0};

    // Exemplo: posicionando alguns navios
    tabuleiro[4][4] = 3;
    tabuleiro[5][5] = 3;
    tabuleiro[2][7] = 3;

    // Matrizes de habilidade
    int cone[5][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };

    int cruz[5][5] = {
        {0,0,1,0,0},
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0},
        {0,0,1,0,0}
    };

    int octaedro[5][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1},
        {0,1,1,1,0},
        {0,0,1,0,0}
    };

    printf("Tabuleiro inicial:\n");
    exibirTabuleiro(tabuleiro);

    // Aplicando habilidades
    printf("\nAplicando habilidade em CONE no centro (5,5):\n");
    aplicarHabilidade(tabuleiro, cone, 5, 5);
    exibirTabuleiro(tabuleiro);

    printf("\nAplicando habilidade em CRUZ no ponto (2,2):\n");
    aplicarHabilidade(tabuleiro, cruz, 2, 2);
    exibirTabuleiro(tabuleiro);

    printf("\nAplicando habilidade em OCTAEDRO no ponto (7,7):\n");
    aplicarHabilidade(tabuleiro, octaedro, 7, 7);
    exibirTabuleiro(tabuleiro);

    return 0;
}
