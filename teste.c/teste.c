#include <stdio.h>


void moverBispo(int n) {
    if (n== 0) return;

    for (int i = 0; i < n; i++) {
        printf(" Cima e Direita\n");
    }

    moverBispo(n - 1);
}

int main() {

    printf("\nBISPO:\n");
    moverBispo(5);


    return 0;
}
