#include <stdlib.h>
#include <stdio.h>

void imprimir(int **p, int linhas, int colunas) {
  for(int i=0; i < linhas; i++) {
    for(int j=0; j < colunas; j++) {
      printf("%d ", p[i][j]);
    }
    printf("\n");
  }
}

int main(){
    int ** p;
    int linhas, colunas;
    printf("Digite a quantidade de linhas e colunas:\n");
    scanf("%d%d", &linhas, &colunas);
    p = (int**) calloc(linhas, sizeof(int*));

    for(int i=0; i < linhas; i++) {
      p[i] = (int*) calloc(colunas, sizeof(int));
    }
    imprimir(p, linhas, colunas);
    free(p);
    return 0;
}
