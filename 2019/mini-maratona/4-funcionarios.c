#include <stdio.h>
#include <stdlib.h>
#define TAM 100
/*
* Exercício 4 da mini maratona do dia 27/05/19.
*/


int main() {
  // inicializar variáveis para evitar lixo
  double salario, media_geral=0.0, maior=0.0, media_mulheres=0.0, percentual=0.0;
  int sexo, qtd_mulheres=0;
  for(int i=0; i < TAM; i++) {
    scanf("%d", &sexo);
    scanf("%lf", &salario);
    // soma o salario lido com o conteúdo da variável media_geral
    media_geral += salario;
    if(sexo == 1) { // verifica se é meulher
      // caso seja soma o salario com o conteúdo da variavel media_mulheres
      media_mulheres += salario;
      qtd_mulheres++; // incrementa o contador qtd_mulheres
    }
    if(salario > maior) { // se o salario lido for maior que maior, substitui
      maior = salario;
    }
  }
  // fora do laço calcule as medias e imprima
  media_geral = media_geral / TAM;
  media_mulheres = media_mulheres / qtd_mulheres;
  // faz o cast (conversão de tipos) para que o resultado seja um double e não int
  percentual = ((double)qtd_mulheres/TAM) * 100;
  printf("A) Media populacao: %.2lf\n", media_geral);
  printf("B) Maior salario: %.2lf\n", maior);
  printf("C) Media mulheres: %.2lf\n", media_mulheres);
  printf("D) Percentual: %.2lf\n", percentual);
  return 0;
}
