#include <stdio.h>
#include <stdlib.h>


int main() {
  int quadrado[5][5] = {0};
  int linha, coluna, num = 5;

  // solução 1
  for(linha=0, coluna=4; linha < 5; linha++){
    quadrado[linha][coluna] = num;
    coluna--;
    num *= 2;
  }
  // solução 2
  /*for(linha=0; linha < 5; linha++) {
    for(coluna=0; coluna < 5; coluna++) {
      if(linha+coluna == 4) {
        quadrado[linha][coluna] = num;
        num *= 2;
      }
    }
  }*/

  for(linha=0; linha < 5; linha++) {
    for(coluna=0; coluna < 5; coluna++) {
      printf("%d ", quadrado[linha][coluna]);
    }
    printf("\n");
  }
  return 0;
}
