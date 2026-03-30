#include <stdio.h>
#include <string.h>

#define MAX 5

// Struct
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

// Função para limpar ENTER
void limparEnter(char *str) {
    str[strcspn(str, "\n")] = '\0';
}

// Função de cadastro
void cadastrar(struct Territorio t[]) {
    for (int i = 0; i < MAX; i++) {
        printf("\n--- Territorio %d ---\n", i + 1);

        printf("Nome: ");
        fgets(t[i].nome, 30, stdin);
        limparEnter(t[i].nome);

        printf("Cor do exercito: ");
        fgets(t[i].cor, 10, stdin);
        limparEnter(t[i].cor);

        do {
            printf("Numero de tropas: ");
            scanf("%d", &t[i].tropas);
            getchar();

            if (t[i].tropas < 0) {
                printf("Valor invalido! Digite novamente.\n");
            }

        } while (t[i].tropas < 0);
    }
}

// Função de exibição
void exibir(struct Territorio t[]) {
    printf("\n===== DADOS CADASTRADOS =====\n");

    for (int i = 0; i < MAX; i++) {
        printf("\nTerritorio %d\n", i + 1);
        printf("Nome: %s\n", t[i].nome);
        printf("Cor: %s\n", t[i].cor);
        printf("Tropas: %d\n", t[i].tropas);
    }
}

int main() {
    struct Territorio territorios[MAX];

    cadastrar(territorios);
    exibir(territorios);

    return 0;
}