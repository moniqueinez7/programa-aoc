#include <stdio.h>
#include <string.h>

int main() {
    // carta 1
    char estado[30], codigo[4], cidade[30];
    unsigned long int populacao;
    int turistico, escolha;
    float area, pib, densidade, pibpercapita, inverso_densidade;
    float soma;

    // carta 2
    char estado2[30], codigo2[4], cidade2[30];
    unsigned long int populacao2;
    int turistico2, escolha2;
    float area2, pib2, densidade2, pibpercapita2, inverso_densidade2;
   
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
    getchar();

    // calculos carta 1
    densidade = (float)populacao / area;
    pibpercapita = pib / (float)populacao;
    inverso_densidade = area / (float)populacao;/////////////////

    // entrada carta 2
    printf("\nCARTA 2\n");
    printf("Estado: ");
    fgets(estado2, 30, stdin);
    estado2[strcspn(estado2,"\n")] = '\0';  
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

    //menu interativo 1
    printf ("\nescolha qual atributo:\n");
    printf("1.populaçao\n");
    printf("2.area\n");
    printf("3.PIB\n");
    printf("4.Pontos turisticos\n");
    printf("5.Densidade\n");
    printf("6.per capita\n");
    printf("digite aqui:");
    scanf ("%d", &escolha);
   
    switch(escolha)
    {
    case 1:
      printf("\nAtributo: População:\n");
      printf("CARTA 1 - %s: %lu\n", cidade, populacao);
      printf("CARTA 2 - %s: %lu\n", cidade2, populacao2);
    populacao>populacao2? "CARTA 1 VENCEU!":"CARTA 2 VENCEU!";      
    case 2:
        printf("\nAtributo: Area:\n");      
        printf("CARTA 1 - %s: %.2f km\n",cidade, area); 
        printf("CARTA 2 - %s: %.2f km\n",cidade2, area2);
    area>area2?"CARTA 1 VENCEU":"CARTA 2 VENCEU";
    case 3:
        printf("\nAtributo: PIB:\n");   
        printf("CARTA 1 - %s: %.2f bilhões\n", pib);
        printf("CARTA 2 - %s: %.2f bilhões\n", pib2);
    pib>pib2?"CARTA 1 VENCEU!": "CARTA 2 VENCEU!";
    case 4:
        printf("\nAtributo: Turísticos:\n");    
        printf("CARTA 1 - %s: %d\n",cidade, turistico);
        printf("CARTA 2 - %s: %d\n",cidade2, turistico2);
    turistico>turistico2?"CARTA 1 VENCEU!":"CARTA 2 VENCEU!";
    case 5:        
        printf("\nAtributo: Densidade):\n");    
        printf("CARTA 1 - %s: %.6f\n",cidade, inverso_densidade);
        printf("CARTA 2 - %s: %.6f\n",cidade2, inverso_densidade2);
    inverso_densidade<inverso_densidade2?"CARTA 1 VENCEU":"CARTA 2 VENCEU!";
    case 6: 
        printf("\nAtributo: Per capita):\n");    
        printf("CARTA 1 - %s: %2f\n",cidade, pibpercapita);
        printf("CARTA 2 - %s: %2f\n",cidade2, pibpercapita2);
    pibpercapita>pibpercapita2?"CARTA 1 VENCEU!": "CARTA 2 VENCEU1";
    }

    //menu interativo 2
    printf ("\nescolha qual atributo:\n");
    printf("1.populaçao\n");
    printf("2.area\n");
    printf("3.PIB\n");
    printf("4.Pontos turisticos\n");
    printf("5.Densidade\n");
    printf("6.per capita\n");
    printf("digite aqui:");
    scanf ("%d", &escolha2);
   
    switch(escolha2)
    {
    case 1:
      printf("\nAtributo: População:\n");
      printf("CARTA 1 - %s: %lu\n", cidade, populacao);
      printf("CARTA 2 - %s: %lu\n", cidade2, populacao2);
    populacao>populacao2? "CARTA 1 VENCEU!":"CARTA 2 VENCEU!";      
    case 2:
        printf("\nAtributo: Area:\n");      
        printf("CARTA 1 - %s: %.2f km\n",cidade, area); 
        printf("CARTA 2 - %s: %.2f km\n",cidade2, area2);
    area>area2?"CARTA 1 VENCEU":"CARTA 2 VENCEU";
    case 3:
        printf("\nAtributo: PIB:\n");   
        printf("CARTA 1 - %s: %.2f bilhões\n", pib);
        printf("CARTA 2 - %s: %.2f bilhões\n", pib2);
    pib>pib2?"CARTA 1 VENCEU!": "CARTA 2 VENCEU!";
    case 4:
        printf("\nAtributo: Turísticos:\n");    
        printf("CARTA 1 - %s: %d\n",cidade, turistico);
        printf("CARTA 2 - %s: %d\n",cidade2, turistico2);
    turistico>turistico2?"CARTA 1 VENCEU!":"CARTA 2 VENCEU!";
    case 5:        
        printf("\nAtributo: Densidade):\n");    
        printf("CARTA 1 - %s: %.6f\n",cidade, inverso_densidade);
        printf("CARTA 2 - %s: %.6f\n",cidade2, inverso_densidade2);
    inverso_densidade<inverso_densidade2?"CARTA 1 VENCEU":"CARTA 2 VENCEU!";
    case 6: 
        printf("\nAtributo: Per capita):\n");    
        printf("CARTA 1 - %s: %2f\n",cidade, pibpercapita);
        printf("CARTA 2 - %s: %2f\n",cidade2, pibpercapita2);
    pibpercapita>pibpercapita2?"CARTA 1 VENCEU!": "CARTA 2 VENCEU1";
    }

    soma= escolha+escolha2;
   printf("soma: %f", soma); 
    
    return 0; }

