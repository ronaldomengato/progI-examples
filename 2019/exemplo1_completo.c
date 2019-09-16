#include <stdio.h>
#include <stdlib.h>
#define MAX_NOME 100
#define DIA_ATUAL 11
#define MES_ATUAL 9
#define ANO_ATUAL 2019

typedef struct cliente {
  int codigo;
  int idade;
  float peso;
  char nome[MAX_NOME];
  int dia;
  int mes;
  int ano;
} Cliente;

void ler(Cliente *c, int * cont);
void imprimir(Cliente *c);
int calculaIdade(Cliente *c);

int main(){
  int x;
  printf("Quantos clientes? \n");
  scanf("%d", &x);
  Cliente lista[x];

  int codigo;
  int op = -1;
  int cont = 0;

  do {
    system("cls");
    printf("*** MENU ***\n");
    printf("0 - Sair\n1 - Cadastrar\n2 - Imprimir\n");
    scanf("%d", &op);
    switch (op) {
      case 1:
        ler(&lista[cont], &cont);
        break;
      case 2:
        printf("Digite o codigo: \n");
        scanf("%d", &codigo);
        imprimir(&lista[codigo-1]);
        break;
    }
  } while(op != 0);

}

int calculaIdade(Cliente * c) {
  int idade = ANO_ATUAL - c->ano;
  if(MES_ATUAL > c->mes){
    return idade;
  }
  if(MES_ATUAL < c->mes) {
    idade--;
  } else if(DIA_ATUAL < c->dia) {
    idade--;
  }
  return idade;
}

void ler(Cliente * c, int * cont) {
  system("cls");
  c->codigo = ++(*cont);
  printf("codigo:%d %d\n", c->codigo, *cont);
  printf("\nDigite o peso:");
  scanf("%f", &c->peso);
  getchar();
  printf("\nDigite o nome:");
  fgets(c->nome, MAX_NOME, stdin);
  printf("\nInforme a data de nascimento: ");
  scanf("%d%d%d", &c->dia, &c->mes, &c->ano);
  c->idade = calculaIdade(c);
}

void imprimir(Cliente * c) {
  system("cls");
  printf("Codigo: %d\n", c->codigo);
  printf("Nome: %s", c->nome);
  printf("Peso: %.2f\n", c->peso);
  printf("Idade: %d\n", c->idade);
  printf("Data nascimento: %d/%d/%d\n", c->dia, c->mes, c->ano);
  system("pause");
}
