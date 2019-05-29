#include <stdio.h>
#include <stdlib.h>
#define TAM 50
/*
* Exercício 6 da mini maratona do dia 27/05/19.
*/


int main() {
  int vet[TAM];
  for(int i=0; i < TAM; i++) {
    scanf("%d", &vet[i]);
  }
  for(int i=0; i < TAM; i++) {
    if(i % 2 != 0) {
      printf("%d\n", vet[i]);
    }
  }

  return 0;
}
