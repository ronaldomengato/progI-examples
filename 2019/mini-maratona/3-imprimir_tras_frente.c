#include <stdio.h>
#include <stdlib.h>
/*
* Exercício 3 da mini maratona do dia 27/05/19.
*/


int main() {
  int vet[10];
  int i;
  for(i=0; i < 10; i++) {
    scanf("%d", &vet[i]);
  }
  for(i=9; i >= 0; i--) {
    printf("%d\t", vet[i]);
  }
  return 0;
}
