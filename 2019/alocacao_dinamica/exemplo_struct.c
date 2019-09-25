#include <stdlib.h>
#include <stdio.h>
#define TAM 50

typedef struct personagem {
  char nome[TAM];
  float xp;
  int idade;
  int forca;
} Personagem;

void imprimir(Personagem * p, int qtd) {
  for(int i=0; i < qtd; i++) {
    printf("Nome: %s\n", (p+i)->nome);
    printf("XP: %.2f\n", (p+i)->xp);
    printf("Idade: %d\n", (p+i)->idade);
    printf("Forca: %d\n", (p+i)->forca);
  }
}

int main(){
    Personagem * p;
    int qtd;
    printf("Digite a quantidade de personagens:\n");
    scanf("%d", &qtd);
    getchar();
    p = (Personagem *) calloc(qtd, sizeof(Personagem));
    for(int i=0; i < qtd; i++) {
      printf("Digite o nome: \n");
      fgets((p+i)->nome, TAM, stdin);
      printf("\nDigite o XP: ");
      scanf("%f", &(p+i)->xp);
      getchar();
      printf("\nDigite a idade: ");
      scanf("%d", &(p+i)->idade);
      getchar();
      printf("\nDigite a forca: ");
      scanf("%d", &(p+i)->forca);
      getchar();
      system("cls");
    }
    imprimir(p, qtd);
    free(p);
    return 0;
}
