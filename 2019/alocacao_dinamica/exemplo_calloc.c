#include <stdlib.h>
#include <stdio.h>

int main(){
    int * p;
    int qtd;
    printf("Digite a quantidade de elementos no vetor:\n");
    scanf("%d", &qtd);
    p = (int *) calloc(qtd, sizeof(int));
    for(int i=0; i < qtd; i++) {
      printf("%d ", p[i]);
    }
    free(p);
    return 0;
}
