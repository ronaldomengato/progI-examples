#include <stdio.h>
#include <stdlib.h>
#define TAM 4
/*
* Exercício 7 da mini maratona do dia 27/05/19.
*/


int main() {
  int vet[TAM];
  int aux;
  for(int i=0; i < TAM; i++) {
    scanf("%d", &vet[i]);
  }
  /* usa-se dois laços, um dentro do outro
  * o mais externo trava em uma posição do array,
  * enquanto o segundo percorre o vetor comparando essa posição com as outras.
  * Caso a posição travada seja menor ela é trocada.
  */
  for(int i=0; i < TAM; i++) {
    for(int j=0; j < TAM; j++) {
      if (vet[i] < vet[j]) {
        // uma variável aux é necessária para não perder o valor de vet[i]
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
      }
    }
  }
  // esse laço apenas imprime o vetor
  for(int i=0; i < TAM; i++) {
    printf("%d\t", vet[i]);
  }
  return 0;
}
