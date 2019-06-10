#include <stdio.h>
#include <stdlib.h>
#define LINHAS 5
#define COLUNAS 6

void imprimirMatriz(int matriz[LINHAS][COLUNAS]);

int main() {
  int tabela[LINHAS][COLUNAS] = {
                    {1,2,3,4,5},
                    {2,4,6,8,10},
                    {20,10,5,3,1},
                    {3,6,9,12,15}};
                    int lin, col, soma=0, somaGeral=0;
    for(lin = 0; lin < LINHAS; lin++){
        for(col = 0; col < COLUNAS; col++){
            if(col == COLUNAS-1){
                if(lin != LINHAS -1){
                    tabela[lin][col] = soma;
                }
            } else {
                soma += tabela[lin][col];
            }
        }
        somaGeral += soma;
        soma = 0;
    }
    for(col = 0; col < COLUNAS; col++){
        for(lin = 0; lin < LINHAS; lin++){
            if(lin == LINHAS - 1){
                if(col != COLUNAS - 1){
                    tabela[lin][col] = soma;
                }
            } else {
                soma += tabela[lin][col];
            }
        }
        soma = 0;
    }
    tabela[LINHAS-1][COLUNAS-1] = somaGeral;
  imprimirMatriz(tabela);
  return 0;
}

void imprimirMatriz(int matriz[LINHAS][COLUNAS]) {
  for(int i=0; i < LINHAS; i++) {
    for(int j=0; j < COLUNAS; j++) {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }
}
