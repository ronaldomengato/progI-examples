#include <stdio.h>
#include <stdlib.h>
#define LINHA 5
#define COLUNA 4

float matriz[LINHA][COLUNA] = {0};

void imprimir_matriz();

int main() {
  int i, j;
  for(i=0; i < LINHA; i++) {
    for(j=0; j < COLUNA; j++) {
      printf("Preencha matriz[%d][%d]: ", i, j);
      scanf("%f", &matriz[i][j]);
      imprimir_matriz();
    }
  }
  return 0;
}

void imprimir_matriz() {
  int i, j;
  system("cls");
  for(i=0; i < LINHA; i++) {
    for(j=0; j < COLUNA; j++) {
      printf("%.2f  ", matriz[i][j]);
    }
    printf("\n");
  }
}
