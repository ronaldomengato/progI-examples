#include <stdio.h>
#include <stdlib.h>
/*
* Exercício 8 da mini maratona do dia 27/05/19.
*/


int main() {
  int n, aux;
  double nota, maior, menor, media=0.0;
  scanf("%d", &n); // quantidade de notas
  aux = n; // auxiliar deverá ser usada para preservar n na hora do calcula da media

  // lê s primeira nota e assume que esta é a maior e menor por enquanto
  scanf("%lf", &nota);
  maior = nota;
  menor = nota;
  media += nota;

  aux--;
  while(aux > 0) {
    scanf("%lf", &nota);
    media += nota;
    if(nota > maior) {
      maior = nota;
    }
    if(nota < menor) {
      menor = nota;
    }
    aux--;
  }
  media = media / n;
  printf("Menor nota: %.2lf\n", menor);
  printf("Maior nota: %.2lf\n", maior);
  printf("Media: %.2lf\n", media);
  return 0;
}
