#include <stdio.h>
#include <stdlib.h>
#define TAM 10
/*
* Exercício 10 da mini maratona do dia 27/05/19.
* Esta solução envolve o uso de dois arrays unidimensionais,
* sendo que com matriz também pode se ter o mesmo resulado.
*/
int main() {
  int voos[TAM];
  int qtds[TAM];
  int documento=0, voo, i;
  for(i=0; i < TAM; i++) {
    scanf("%d", &voos[i]);
    scanf("%d", &qtds[i]);
  }
  do{
    scanf("%d", &documento);
    if(documento != 9999) {
      scanf("%d", &voo);
      int achou = 0; // variavel auxiliar para ajudar a saber se há passagens
      // percorre o vetor com os voos para ver se há vagas
      for(i=0; i < TAM; i++) {
        if(voo == voos[i]){ // verifica se o voo do vetor é igual o desejado
          if(qtds[i] > 0){ //verifica se há vagas
            /* caso tenha vaga a variavel achou é alterada,
            * a quantidade de vagas é diminuída e
            * é printado o documento do usuário .
            */
            achou = 1;
            qtds[i]--;
            printf("%d\n", documento);
          }
        }
      }
      if(!achou) { //caso achou tenha o valor 0 essa condição será verdadeira
        printf("INDISPONIVEL\n");
      }
    }
  } while(documento !=9999);
  return 0;
}
