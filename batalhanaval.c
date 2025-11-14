#include <stdio.h>

#define N 10  // tamanho do tabuleiro

// Exibe o tabuleiro
void exibirTabuleiro(int tab[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
}

// Aplica habilidade no tabuleiro
void aplicarHabilidade(int tab[N][N], int hab[5][5], int ox, int oy) {
    int centro = 2;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {

            if (hab[i][j] == 1) {
                int x = ox + (i - centro);
                int y = oy + (j - centro);

                // Não sair dos limites
                if (x >= 0 && x < N && y >= 0 && y < N) {
                    tab[x][y] = 1;
                }
            }
        }
    }
}

int main() {

    // Matrizes das habilidades
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

    // Tabuleiro para cada habilidade (separado)
    int tabCone[N][N] = {0};
    int tabCruz[N][N] = {0};
    int tabOct[N][N]  = {0};

    // Aplicando cada habilidade em tabuleiros separados
    aplicarHabilidade(tabCone, cone, 2, 2);
    aplicarHabilidade(tabCruz, cruz, 7, 7);
    aplicarHabilidade(tabOct,  octaedro, 5, 2);

    // Exibindo resultados separadamente
    printf("\n===== SAÍDA: HABILIDADE CONE =====\n");
    exibirTabuleiro(tabCone);

    printf("\n===== SAÍDA: HABILIDADE CRUZ =====\n");
    exibirTabuleiro(tabCruz);

    printf("\n===== SAÍDA: HABILIDADE OCTAEDRO =====\n");
    exibirTabuleiro(tabOct);

    return 0;
}
