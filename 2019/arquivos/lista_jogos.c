#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_STRING 50
char FILENAME[] = "jogos.data";

typedef struct jogo{
    int id;
    char nome[TAM_STRING];
    char plataforma[TAM_STRING];
    char tipo[TAM_STRING];
} Jogo;

int salvar(Jogo *jogo){
    FILE * arquivo = fopen(FILENAME, "a+");

    if(arquivo == NULL){
        printf("Falha ao abrir arquivo");
        exit(1);
    }

    int result = fwrite(jogo, sizeof(Jogo), 1, arquivo);
    fclose(arquivo);
    return result;

}

void listar(){
    FILE * arquivo = fopen(FILENAME, "rb");

    if(arquivo == NULL){
        printf("Falha ao abrir arquivo");
        exit(1);
    }

    Jogo aux;

    system("cls");
    printf("**** LISTA DE JOGOS ****\n");
    while(fread(&aux, sizeof(Jogo), 1, arquivo)){
        printf("ID: %d \tNOME: %s \tPLATAFORMA: %s \tTIPO: %s \n",
               aux.id, aux.nome, aux.plataforma, aux.tipo);
    }
    printf("**************************\n");

    fclose(arquivo);

}

void buscar(int codigo){
    FILE * arquivo = fopen(FILENAME, "rb");
    Jogo aux;
    int achou = 0;

    if(arquivo == NULL){
        printf("Falha ao abrir arquivo");
        exit(1);
    }

    while(fread(&aux, sizeof(Jogo), 1, arquivo)){
        if(aux.id == codigo){
            achou = 1;
            break;
        }
    }
    if(achou){
        printf("ID: %d \tNOME: %s \tPLATAFORMA: %s \tTIPO: %s \n",
               aux.id, aux.nome, aux.plataforma, aux.tipo);
    } else{
        printf("Codigo nao encontrado!\n");
    }
    fclose(arquivo);
}

void encontrarPorPosicao(int n) {
  FILE * arquivo = fopen(FILENAME, "rb");

  if(arquivo == NULL){
      printf("Falha ao abrir arquivo");
      exit(1);
  }

  fseek(arquivo, n * sizeof(Jogo), SEEK_SET);
  Jogo aux;
  int lido = fread(&aux, sizeof(Jogo), 1, arquivo);
  if (lido >= 1) {
    printf("ID: %d \tNOME: %s \tPLATAFORMA: %s \tTIPO: %s \n",
         aux.id, aux.nome, aux.plataforma, aux.tipo);
  } else {
    printf("posicao nao encontrada!\n");
  }

  fclose(arquivo);
}


int main(){

    int codigo, n;
    Jogo aux;

    int op=0;
    do{
        printf("1 - Cadastrar jogo\n2 - Listar jogos \n3 - Buscar\n4 - Encontrar\n5 - Sair\nOpcao: ");
        scanf("%d", &op);
        switch(op){
            case 1:
                printf("\nDigite o ID: ");
                scanf("%d", &aux.id);
                getchar();
                printf("\nDigite o NOME: ");
                fgets(aux.nome, TAM_STRING, stdin);
                aux.nome[strlen(aux.nome)-1] = 0;
                printf("\nDigite a PLATAFORMA: ");
                fgets(aux.plataforma, TAM_STRING, stdin);
                aux.plataforma[strlen(aux.plataforma)-1] = 0;
                printf("\nDigite o TIPO: ");
                fgets(aux.tipo, TAM_STRING, stdin);
                aux.tipo[strlen(aux.tipo)-1] = 0;
                if(salvar(&aux)){
                    system("cls");
                    printf("\nItem inserido com sucesso!\n");
                }
                break;
            case 2:
                listar();
                break;
            case 3:
                system("cls");
                printf("\nDigite o ID: ");
                scanf("%d", &codigo);
                buscar(codigo);
                break;
            case 4:
              system("cls");
              printf("\nDigite o N: ");
              scanf("%d", &n);
              encontrarPorPosicao(n);
              break;
        }
    } while(op != 5);

    return 0;
}
