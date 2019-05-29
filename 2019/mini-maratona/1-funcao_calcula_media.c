#include <stdio.h>
#include <stdlib.h>
/*
* Exercício 1 da mini maratona do dia 27/05/19.
*/

// protótipo da função.
float calculaMedia(float n1, float n2, float n3);

int main() {
  float n1, n2, n3;
  scanf("%f %f %f", &n1, &n2, &n3);
  // chama a função primeiro e depois imprime a media
  printf("%.2f\n", calculaMedia(n1, n2, n3));
  return 0;
}

/*
* Função que recebe as notas e retorna a media.
*/
float calculaMedia(float n1, float n2, float n3){
  // variavel local que irá armazenar a media.
  float media = 0.0;
  media = n1 + n2 + n3;
  media = media / 3;
  return media;
}
