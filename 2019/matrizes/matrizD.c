#include <stdio.h>
#include <stdlib.h>
#define LINHAS 4
#define COLUNAS 4

void imprimirMatriz(int matriz[LINHAS][COLUNAS]);
int existePosicoesVagas(int matriz[LINHAS][COLUNAS]);

int main() {
  int matriz[LINHAS][COLUNAS] = {0};
  int i, j;
  do{
    printf("Digite a posicao do valor: \n");
    scanf("%d %d", &i, &j);
    if(i < LINHAS && j < COLUNAS) {
      printf("Digite o valor a ser salvo: \n");
      scanf("%d", &matriz[i][j]);
      imprimirMatriz(matriz);
    } else {
      printf("Essa posicao nao existe!\n");
    }
  } while(existePosicoesVagas(matriz));
  return 0;
}

int existePosicoesVagas(int matriz[LINHAS][COLUNAS]) {
  for(int i=0; i < LINHAS; i++) {
    for(int j=0; j < COLUNAS; j++) {
      if (matriz[i][j] == 0) {
        return 1;
      }
    }
  }
  return 0;
}

void imprimirMatriz(int matriz[LINHAS][COLUNAS]) {
  system("cls");
  for(int i=0; i < LINHAS; i++) {
    for(int j=0; j < COLUNAS; j++) {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }
}
