#include <stdio.h>
#include <stdlib.h>
#define TAM 5
/*
* Exercício 5 da mini maratona do dia 27/05/19.
*/


int main() {
  int vet[TAM];
  int x, cont=0;
  for(int i=0; i < TAM; i++) {
    scanf("%d", &vet[i]);
  }
  // lê o valor de X, pode ser qualquer um que o usuário informar
  scanf("%d", &x);
  for(int i=0; i < TAM; i++) {
    // percorre todo o vetor e compara o valor de cada posição com o valor de X
    if(vet[i] == x) {
      cont++; // se os valores forem iguais incrementa o X
    }
  }
  // imprimi fora do laço
  printf("O valor %d aparece %d vezes no vetor\n", x, cont);
  return 0;
}
