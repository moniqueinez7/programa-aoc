#include <stdio.h>
#include <string.h>

int main() {
    // carta 1
    char estado, codigo[4], cidade[30];
    unsigned long int populacao;
    int turistico;
    float area, pib, densidade, pibpercapita, superpoder, inverso_densidade;

    // carta 2
    char estado2, codigo2[4], cidade2[30];
    unsigned long int populacao2;
    int turistico2;
    float area2, pib2, densidade2, pibpercapita2, superpoder2, inverso_densidade2;

    // entrada carta 1
    printf("CARTA 1\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado);
    printf("Codigo: ");
    scanf("%s", codigo);
    getchar();
    printf("Nome da cidade: ");
    fgets(cidade, 30, stdin);
    cidade[strcspn(cidade, "\n")] = '\0';
    printf("População: ");
    scanf("%lu", &populacao);
    printf("Area (KM): ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Números de pontos turísticos: ");
    scanf("%d", &turistico);

    // calculos carta 1
    densidade = (float)populacao / area;
    pibpercapita = pib / (float)populacao;
    inverso_densidade = area / (float)populacao;
    superpoder = populacao + area + pib + turistico + pibpercapita + inverso_densidade;

    // entrada carta 2
    printf("CARTA 2\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    getchar();
    printf("Nome da cidade: ");
    fgets(cidade2, 30, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Area (KM): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Números de pontos turísticos: ");
    scanf("%d", &turistico2);

    // calculos carta 2
    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = pib2 / (float)populacao2;
    inverso_densidade2 = area2 / (float)populacao2;
    superpoder2 = populacao2 + area2 + pib2 + turistico2 + pibpercapita2 + inverso_densidade2;

    // exibição carta 1
    printf("\nCARTA 1\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", turistico);
    printf("Densidade: %.2f hab/km\n", densidade);
    printf("Inverso da densidade: %.6f\n", inverso_densidade);
    printf("PIB per capita: %.2f\n", pibpercapita);
    printf("Super poder: %.2f\n", superpoder);

    // exibição carta 2
    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", turistico2);
    printf("Densidade: %.2f hab/km\n", densidade2);
    printf("Inverso da densidade: %.6f\n", inverso_densidade2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Super poder: %.2f\n", superpoder2);

    // comparações
    printf("\nCOMPARAÇÕES:\n");
    printf("População: carta1 venceu %d\n", populacao > populacao2);
    printf("Área: carta1 venceu %d\n", area > area2);
    printf("Turismo: carta1 venceu %d\n", turistico > turistico2);
    printf("PIB: carta1 venceu %d\n", pib > pib2);
    printf("Densidade: carta2 venceu %d\n", inverso_densidade < inverso_densidade2);
    printf("PIB per capita: carta1 venceu %d\n", pibpercapita > pibpercapita2);
    printf("Super poder: carta1 venceu %d\n", superpoder > superpoder2);

    return 0;
}
