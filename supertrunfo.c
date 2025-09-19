#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[30];
    char cidade[30];
    float area;
    float populacao;
    float pib;
    float densidade;
    float pibpercapita;
} Carta;

int menuAtributos(int jaEscolhido) {
    int opcao;
    printf("\nEscolha um atributo:\n");
    if (jaEscolhido != 1) printf("1 - Área\n");
    if (jaEscolhido != 2) printf("2 - População\n");
    if (jaEscolhido != 3) printf("3 - PIB\n");
    if (jaEscolhido != 4) printf("4 - Densidade Demográfica\n");
    if (jaEscolhido != 5) printf("5 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // Impedir repetição
    if (opcao == jaEscolhido) {
        printf("Atributo já escolhido! Escolha outro.\n");
        return menuAtributos(jaEscolhido);
    }
    return opcao;
}

// Função para obter valor do atributo
float getValor(Carta c, int atributo) {
    switch (atributo) {
        case 1: return c.area;
        case 2: return c.populacao;
        case 3: return c.pib;
        case 4: return c.densidade;
        case 5: return c.pibpercapita;
        default: return 0;
    }
}

// Função para imprimir nome do atributo
const char* nomeAtributo(int atributo) {
    switch (atributo) {
        case 1: return "Área";
        case 2: return "População";
        case 3: return "PIB";
        case 4: return "Densidade Demográfica";
        case 5: return "PIB per Capita";
        default: return "";
    }
}

int main() {
    Carta c1, c2;
    int atributo1, atributo2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado: ");
    scanf(" %[^\n]", c1.estado);
    printf("Digite a cidade: ");
    scanf(" %[^\n]", c1.cidade);
    printf("Digite a área: ");
    scanf("%f", &c1.area);
    printf("Digite a população: ");
    scanf("%f", &c1.populacao);
    printf("Digite o PIB: ");
    scanf("%f", &c1.pib);
    printf("Digite a densidade demográfica: ");
    scanf("%f", &c1.densidade);
    printf("Digite o PIB per capita: ");
    scanf("%f", &c1.pibpercapita);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado: ");
    scanf(" %[^\n]", c2.estado);
    printf("Digite a cidade: ");
    scanf(" %[^\n]", c2.cidade);
    printf("Digite a área: ");
    scanf("%f", &c2.area);
    printf("Digite a população: ");
    scanf("%f", &c2.populacao);
    printf("Digite o PIB: ");
    scanf("%f", &c2.pib);
    printf("Digite a densidade demográfica: ");
    scanf("%f", &c2.densidade);
    printf("Digite o PIB per capita: ");
    scanf("%f", &c2.pibpercapita);

    printf("\nSuper Trunfo - Comparação de Cartas\n");

    // Escolha dos atributos
    atributo1 = menuAtributos(0);
    atributo2 = menuAtributos(atributo1);

    // Obtenção dos valores
    float v1a1 = getValor(c1, atributo1);
    float v1a2 = getValor(c1, atributo2);
    float v2a1 = getValor(c2, atributo1);
    float v2a2 = getValor(c2, atributo2);

    // Exibição da comparação
    printf("\nComparação entre %s - %s e %s - %s\n", c1.estado, c1.cidade, c2.estado, c2.cidade);
    printf("%s (%s): %.2f x %.2f (%s)\n", c1.cidade, nomeAtributo(atributo1), v1a1, v2a1, c2.cidade);
    printf("%s (%s): %.2f x %.2f (%s)\n", c1.cidade, nomeAtributo(atributo2), v1a2, v2a2, c2.cidade);

    // Soma dos atributos (com regra especial da densidade)
    float soma1 = 0, soma2 = 0;

    if (atributo1 == 4) { // densidade
        soma1 += (v1a1 < v2a1) ? 1 : 0;
        soma2 += (v2a1 < v1a1) ? 1 : 0;
    } else {
        soma1 += (v1a1 > v2a1) ? 1 : 0;
        soma2 += (v2a1 > v1a1) ? 1 : 0;
    }

    if (atributo2 == 4) { // densidade
        soma1 += (v1a2 < v2a2) ? 1 : 0;
        soma2 += (v2a2 < v1a2) ? 1 : 0;
    } else {
        soma1 += (v1a2 > v2a2) ? 1 : 0;
        soma2 += (v2a2 > v1a2) ? 1 : 0;
    }

    printf("\nPontuação final:\n");
    printf("%s - %s: %.0f pontos\n", c1.estado, c1.cidade, soma1);
    printf("%s - %s: %.0f pontos\n", c2.estado, c2.cidade, soma2);

    if (soma1 > soma2) {
        printf("\n%s - %s venceu a rodada!\n", c1.estado, c1.cidade);
    } else if (soma2 > soma1) {
        printf("\n%s - %s venceu a rodada!\n", c2.estado, c2.cidade);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
