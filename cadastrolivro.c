#include <stdio.h>
#include <stdalign.h>
#include <strings.h>

#define max_livros 50
#define tam_string 100

struct livro {
    char nome [tam_string];
    char autor [tam_string];
    char editora [tam_string];
    int edicao;
};

void limparbuffetentrada(){
    int c;
    while ((c=getchar())!='\n' && c != EOF);
}

int main (){
    struct livro biblioteca[max_livros];
    int totallivros =0;
    int opcao;

    do {
        printf ("===============================\n");
        printf("BIBLIOTECA - PARTE1\n");
        printf("================================\n");
        printf("1- cadastrar novo livro\n");
        printf("2- listar todos os livro\n");
        printf("0- sair\n");
        printf("-------------------------------\n");
        printf?("escolha uma opcao:");
    

        scanf("%d", &opcao);
        limparbuffetentrada();

        switch (opcao) {
            case 1:
                printf("cadastro de livro\n\n");

                if(totallivros < max_livros)
        }
    }
}
    
