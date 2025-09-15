#include <stdio.h>
#include <string.h>

int main() {
    // carta 1
    char estado[30], codigo[4], cidade[30];
    unsigned long int populacao;
    int turistico;
    float area, pib, densidade, pibpercapita, superpoder, inverso_densidade;

    // carta 2
    char estado2[30], codigo2[4], cidade2[30];
    unsigned long int populacao2;
    int turistico2;
    float area2, pib2, densidade2, pibpercapita2, superpoder2, inverso_densidade2;

    // entrada carta 1
    printf("CARTA 1\n");
    printf("Estado: ");
    fgets(estado, 30, stdin);
    estado[strcspn(estado, "\n")] = '\0';  
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
    printf("Estado: ");
    fgets(estado2, 30, stdin);
    estado2[strcspn(estado2, "\n")] = '\0';  
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

    printf("\nComparação de cartas (Atributo: População):\n");
    printf("CARTA 1 - %s: %lu\n", cidade, populacao);
    printf("CARTA 2 - %s: %lu\n", cidade2, populacao2);
    if(populacao>populacao2){
        printf("resultado: Carta 1 (%s) venceu!\n", cidade);
    }
    else {
        printf("resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    printf("\nComparação de cartas (Atributo: Area):\n");      
    printf("Área: %.2f km\n", area); 
    printf("Área: %.2f km\n", area2);
    if(area>area2){
        printf("resultado: Carta 1 (%.2f) venceu!\n", area);
    }
    else {
        printf("resultado: Carta 2 (%.2f) venceu!\n", area2);
    }
    printf("\nComparação de cartas (Atributo: PIB):\n");   
    printf("PIB: %.2f bilhões\n", pib);
    printf("PIB: %.2f bilhões\n", pib2);
    if(pib>pib2){
        printf("resultado: Carta 1 (%.2f) venceu!\n", pib);
    }
    else {
        printf("resultado: Carta 2 (%.2f) venceu!\n", pib2);
    }
    printf("\nComparação de cartas (Atributo: Turísticos):\n");    
    printf("Pontos turísticos: %d\n", turistico);
    printf("Pontos turísticos: %d\n", turistico2);
    if(turistico>turistico2){
        printf("resultado: Carta 1 (%d) venceu!\n", turistico);
    }
    else {
        printf("resultado: Carta 2 (%d) venceu!\n", turistico2);
    }
    printf("\nComparação de cartas (Atributo: Densidade):\n");    
    printf("Inverso da densidade: %.6f\n", inverso_densidade);
    printf("Inverso da densidade: %.6f\n", inverso_densidade2);
    if(inverso_densidade<inverso_densidade2){
        printf("resultado: Carta 1 (%f) venceu!\n", inverso_densidade);
     }
    else {
        printf("resultado: Carta 2 (%f) venceu!\n", inverso_densidade2);
    }
    printf("\nComparação de cartas (Atributo: Per capita):\n");    
    printf("PIB per capita: %2f\n", pibpercapita);
    printf("PIB per capita: %2f\n", pibpercapita2);
    if(pibpercapita>pibpercapita2){
        printf("resultado: Carta 1 (%f) venceu!\n", pibpercapita);
     }
    else {
        printf("resultado: Carta 2 (%f) venceu!\n", pibpercapita2);
    }
    printf("\nComparação de cartas (Atributo: Super poder):\n");    
    printf("Super poder: %.2f\n", superpoder);
    printf("Super poder: %.2f\n", superpoder2);
    if(superpoder>superpoder2){
        printf("resultado: Carta 1 (%.2f) venceu!\n", superpoder);
     }
    else {
        printf("resultado: Carta 2 (%.2f) venceu!\n", superpoder2);
    }

    
    return 0;	
}

