#include <stdio.h>

int main(){
    int bispo=0, rainha=0;

    //loop for 
    printf ("TORRE:\n");
    for(int torre=0; torre<5; torre++){
        printf("Direita\n");//imprime a direçao do movimento
    }
    //loop while 
    printf("\nBISPO:\n");
    while (bispo<5){ 
        printf("Cima, Direita\n");//imprime a direçao do movimento
    bispo++;  
    }
    //loop do-while
    printf("\nRAINHA\n");
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha<8);

   //loop aninhado 
   printf("\nCAVALO\n");
    for(int i = 0; i<1; i++){
        for (int j=0; j<2; j++){
            printf("baixo\n");
        }
        printf("esquerda\n");
        printf("\n");
    
    }





    return 0;
}
