#include <stdio.h>
#include <string.h>

int main (){
//carta 1
char estado;
char codigo[4];
char cidade[30];
unsigned long int populacao;
int turistico;
float area, pib;
float densidade, pibpercapita;
float superpoder, inverso_densidade;

//carta 2 
char estado2;
char codigo2[4];
char cidade2[30];
unsigned long int populacao2;
int turistico2;
float area2, pib2;
float densidade2, pibpercapita2;
float superpoder2, inverso_densidade2;

//entrada de dados
printf("CARTA 1\n");
printf("Estado (A-H):\n");
scanf(" %c", &estado);
printf("Codigo:\n");
scanf("%s", codigo);
getchar();
printf("Nome da cidade:\n");
fgets(cidade, 30, stdin);
cidade[strcspn(cidade, "\n")]= '\0';
printf("Populaçao:\n");
scanf ("%lu", &populacao);
printf("Area (KM):\n");
scanf("%f", &area);
printf("PIB:\n");
scanf("%f", &pib);
printf("Numeros de pontos turisticos:\n");
scanf("%ld", &turistico);

//calculos1
densidade = (populacao/area);

pibpercapita= (pib/(double)populacao);

inverso_densidade= (area/populacao);

superpoder= (populacao+area+pib+turistico+pibpercapita+inverso_densidade);

printf("CARTA 2\n");

printf("Estado (A-H):\n");
scanf(" %c", &estado2);
printf("Codigo:\n");
scanf("%s", codigo2);
getchar();
printf("Nome da cidade:\n");
fgets(cidade2, 30, stdin);
cidade2[strcspn(cidade,"\n")]='\0';
printf("Populaçao:\n");
scanf ("%ul", &populacao2);
printf("Area (KM):\n");
scanf("%f", &area2);
printf("PIB:\n");
scanf("%f", &pib2);
printf("Numeros de pontos turisticos:\n");
scanf("%ld", &turistico2);

//calculos2
densidade2 = (float) (populacao2/area2);

pibpercapita2= (pib2/(float)populacao20;

inverso_densidade2= (area2/populacao2);

superpoder2= (populacao2+area2+pib2+turistico2+pibpercapita2+inverso_densidade2);

//exibiçao
//primeira carta
printf("CARTA 1 \n");
printf("estado: %c\n", estado);
printf("Codigo: %s\n", codigo);
printf("Nome da cidade: %s\n", cidade);
printf("Populaçao: %lu\n", populacao);
printf("Area: %.2f km\n", area);
printf("PIB: %.2f bilhoes de reais\n", pib);
printf("Numeros de pontos turisticos: %ul\n", turistico);
printf("Densidade populacional: %.2f hab/km\n ", densidade);
printf("Inverso da Densidade: %f\n", inverso_densidade);
printf("PIB per capita: %.2f reais\n", pibpercapita);
printf("Super poder: %f.2\n", superpoder);

//segunda carta 
printf("CARTA 2\n");
printf("Estado: %c\n", estado);
printf("Codigo: %s\n", codigo2); 
printf("Nome da cidade: %s\n", cidade2);
printf("Populaçao: %ul\n", populacao2);
printf("Area: %.2f km\n", area2);
printf("PIB: %.2f bilhoes de reais\n", pib2);
printf("Numeros de pontos de turistico: %ul\n", turistico2);
printf("Densidade populacional: %.2f hab/km\n", densidade2);
printf("Inverso da Densidade: %f\n", inverso_densidade2);
printf("PIB per capita: %.2f reais\n", pibpercapita2);
printf("Super poder: %f.2\n", superpoder2);

//comparaçoes
int resultado1= populacao>populacao2;
int resultado2= area>area2;
int resultado3= turistico>turistico2;
int resultado4= pib>pib2;
int resultado5= inverso_densidade<inverso_densidade2;
int resultado6=pibpercapita>pibpercapita2;
int resultado7= superpoder>superpoder2;

//exibiçao
printf(" COMPARAÇOES DE CARTAS:\n");
printf("Populaçao: carta1 venceu %d\n", resultado1);
printf("Area: carta1 venceu %d\n", resultado2);
printf("Pontos turistico: carta 1 venceu %d\n", resultado3);
printf("PIB: venceu carta 1 %d\n", resultado4);
printf("Densidade populacional: carta 2 venceu %d\n", resultado5);
printf("PIB per capita: carta 1 venceu %d\n", resultado6);
printf("Suoer poder: carta1 venceu %d\n", resultado7);





return 0;

}




