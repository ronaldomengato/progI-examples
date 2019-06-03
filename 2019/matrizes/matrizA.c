#include <stdio.h>
#include <stdlib.h>


int main() {
  int quadrado[5][5] = {0};
  int linha, coluna;
  for(linha=0; linha < 5; linha++) {
    for(coluna=0; coluna < 5; coluna++) {
      if(linha == coluna) {
        quadrado[linha][coluna] = (coluna+1) * (coluna+1);
      }
    }
  }
  for(linha=0; linha < 5; linha++) {
    for(coluna=0; coluna < 5; coluna++) {
      printf("%d ", quadrado[linha][coluna]);
    }
    printf("\n");
  }
  return 0;
}
