#include <stdlib.h>
#include <stdio.h>

void imprimir(int * p, int qtd) {
  for(int i=0; i < qtd; i++) {
    p[i] = i + 2;
    printf("%d ", p[i]);
  }
  printf("\n");
}

int main(){
    int * p;
    int qtd,i=0;
    printf("Digite a quantidade de elementos no vetor:\n");
    scanf("%d", &qtd);
    p = (int *) calloc(qtd, sizeof(int));
    printf("Quantidade normal: \n");
    imprimir(p, qtd);
    p = (int *) realloc(p, qtd*2*sizeof(int));
    printf("Dobro: \n");
    imprimir(p, qtd*2);

    free(p);
    return 0;
}
