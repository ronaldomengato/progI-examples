#include <stdio.h>
#include <stdlib.h>
#define TAM 37

int main() {
  int matriz[TAM][2];
  int documento=0, voo, i, j;
  for(i=0; i < TAM; i++) {
    scanf("%d %d", &matriz[i][0], &matriz[i][1]);
  }
  do{
    scanf("%d", &documento);
    if(documento != 9999) {
      scanf("%d", &voo);
      int achou = 0; // variavel auxiliar para ajudar a saber se há passagens
      // percorre o vetor com os voos para ver se há vagas
      for(i=0; i < TAM; i++) {
          if(voo == matriz[i][0]){
            if(matriz[i][1] > 0){ //verifica se há vagas
              /* caso tenha vaga a variavel achou é alterada,
              * a quantidade de vagas é diminuída e
              * é printado o documento do usuário .
              */
              achou = 1;
              matriz[i][1] = matriz[i][1] - 1;
              printf("%d\n", documento);
            }
            break;
          }
      }
      if(!achou) { //caso achou tenha o valor 0 essa condição será verdadeira
        printf("INDISPONIVEL\n");
      }
    }
  } while(documento !=9999);
  return 0;
}
