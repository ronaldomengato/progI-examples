#include <stdio.h>
#include <stdlib.h>
#define TAM 4
/*
* Exercício 9 da mini maratona do dia 27/05/19.
*/


int main() {
  int vet[TAM] = {4, 40, 2, 20};
  for(int i=0; i < TAM; i++) {
    if(i > 0 && i % 2 == 0) { // é par
      vet[i] = 1;
    } else if(i % 2 != 0) {
      vet[i] = -1;
    }
  }
  for(int i=0; i < TAM; i++) {
    printf("[%d]->%d\t", i, vet[i]);
  }
  return 0;
}
