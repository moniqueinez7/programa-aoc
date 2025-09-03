#include <stdio.h>
#include <string.h>

int main (){
//carta 1
char estado;
char codigo[4];
char cidade[30];
int populacao, turistico;
float area, pib;

//carta 2 
char estado2;
char codigo2[4];
char cidade2[30];
int populacao2, turistico2;
float area2, pib2;


printf("CARTA 1\n");

printf("Estado (A-H):");
scanf(" %c", &estado);

printf("Codigo:");
scanf("%s", codigo);
getchar();

printf("Nome da cidade:");
fgets(cidade, 30, stdin);
cidade[strcspn(cidade, "\n")]= '\0';

printf("Populaçao:");
scanf ("%d", &populacao);

printf("Area (KM):");
scanf("%f", &area);

printf("PIB:");
scanf("%f", &pib);

printf("Numeros de pontos turisticos");
scanf("%d", &turistico);
getchar();

printf ("CARTA 2\n");

printf("Estado (A-H):");
scanf (" %c", &estado2);

printf("Codigo:");
scanf("%s", codigo2);
getchar ();

printf ("Nome da cidade:");
fgets (cidade2, 30, stdin);
cidade2[strcspn(cidade2, "\n")]='\0';

printf("Populaçao:");
scanf("%d", &populacao2);

printf("Area (KM):");
scanf("%f", &area2);

printf("PIB:");
scanf ("%f", &pib2);

printf("Numeros de pontos turisticos:");
scanf ("%d", &turistico2);

//saida formatada
printf("CARTA 1 \n");
printf("estado: %c\n", estado);
printf("Codigo: %s\n", codigo);
printf("Nome da cidade: %s\n", cidade);
printf("Populaçao: %d\n", populacao);
printf("Area: %f\n", area);
printf("PIB: %f\n", pib);
printf("Numeros de pontos turisticos:\n", turistico);

printf("CARTA 2\n");
printf("Estado: %c\n", estado);
printf("Codigo: %s\n", codigo2);
printf("Nome da cidade: %s\n", cidade2);
printf("Populaçao: %d\n", populacao2);
printf("Area: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Numeros de pontos de turistico: %d\n", turistico2);

return 0;

}
