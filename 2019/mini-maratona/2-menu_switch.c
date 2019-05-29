#include <stdio.h>
#include <stdlib.h>
/*
* Exercício 2 da mini maratona do dia 27/05/19.
*/


int main() {
  int opcao = 0;
  /* usa-se do... while para menus,
  * pois sempre vai ser executado ao menos uma vez.
  */
  do{
    printf("\n1 - Comprar Sapato\n2 - Comprar blusa\n3 - Sair\nOpcao:");
    scanf("%d", &opcao);
    // switch para decidir o que o programa deve fazer
    switch (opcao) {
      case 1:
        // bloco será executado se o usuário digitar 1
        printf("\nSapato comprado");
        break;
      case 2:
        // bloco será executado se o usuário digitar 2
        printf("\nBlusa comprada");
        break;
    }
  } while(opcao != 3); // quando o 3 for digitado o laço para.


  return 0;
}
