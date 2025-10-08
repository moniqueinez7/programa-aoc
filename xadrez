#include <stdio.h>

// Função recursiva para a torre
void torreRecursiva(int n) {
    if (n > 0) {
        printf("Direita\n");
        torreRecursiva(n - 1);
    }
}

// Função recursiva para o bispo
void bispoRecursivo(int n) {
    if (n > 0) {
        printf("cima, Direta\n");
        bispoRecursivo(n - 1);
    }
}

// Função recursiva para a rainha
void rainhaRecursiva(int n) {
    if (n > 0) {
        printf("Esquerda\n");
        rainhaRecursiva(n - 1);
    }
}

// Loop aninhado para o cavalo (2 para cima e 1 para a direita)
void cavaloLoop() {
    printf("\nCAVALO:\n");

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Cima\n");
            if (j == 1) continue;
        }

        for (int k = 0; k < 2; k++) {
            if (k == 1) {
                printf("Direita\n");
                break;
            }
        }
    }
}

int main() {
    printf("\nTORRE:\n");
    torreRecursiva(5);

    printf("\nBISPO:\n");
    bispoRecursivo(5);

    printf("\nRAINHA:\n");
    rainhaRecursiva(8);

    cavaloLoop();

    return 0;
}
