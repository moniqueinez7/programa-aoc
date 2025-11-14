#include <stdio.h>

#define N 10 // tamanho do tabuleiro

// Função para exibir o tabuleiro
void exibirTabuleiro(char tabuleiro[N][N]) {
    printf("\n===== TABULEIRO =====\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para aplicar uma habilidade no tabuleiro
void aplicarHabilidade(char tabuleiro[N][N], int habilidade[5][5], int origemX, int origemY) {
    int tamanho = 5;
    int centro = tamanho / 2;

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (habilidade[i][j] == 1) {
                int x = origemX + (i - centro);
                int y = origemY + (j - centro);

                // Condicional para não sair dos limites do tabuleiro
                if (x >= 0 && x < N && y >= 0 && y < N) {
                    // Marca área afetada apenas se não for navio
                    if (tabuleiro[x][y] == '~') {
                        tabuleiro[x][y] = '*'; // área afetada
                    }
                }
            }
        }
    }
}

int main() {
    char tabuleiro[N][N];

    // Inicializa o tabuleiro com água (~)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            tabuleiro[i][j] = '~';
        }
    }

    // Adiciona alguns navios manualmente (representados por '#')
    tabuleiro[4][4] = '#';
    tabuleiro[4][5] = '#';
    tabuleiro[5][4] = '#';

    // Matrizes das habilidades (5x5)
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

    // Mostra tabuleiro inicial
    printf("TABULEIRO INICIAL:\n");
    exibirTabuleiro(tabuleiro);

    // Definindo pontos de origem para as habilidades (linha, coluna)
    int xCone = 2, yCone = 2;
    int xCruz = 6, yCruz = 6;
    int xOct = 5, yOct = 2;

    // Aplicando habilidades
    printf("\nAplicando habilidade CONE em (%d,%d):\n", xCone, yCone);
    aplicarHabilidade(tabuleiro, cone, xCone, yCone);
    exibirTabuleiro(tabuleiro);

    printf("\nAplicando habilidade CRUZ em (%d,%d):\n", xCruz, yCruz);
    aplicarHabilidade(tabuleiro, cruz, xCruz, yCruz);
    exibirTabuleiro(tabuleiro);

    printf("\nAplicando habilidade OCTAEDRO em (%d,%d):\n", xOct, yOct);
    aplicarHabilidade(tabuleiro, octaedro, xOct, yOct);
    exibirTabuleiro(tabuleiro);

    printf("\nLegenda:\n~ = Água\n# = Navio\n* = Área afetada pela habilidade\n");

    return 0;
}
