#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int numEntradas=0;
  int cont=0;
  int inicio;
  int final;
  int tam;
  int isPalindromo = 1; //true
  char string[255];
  scanf("%d%c", &numEntradas);
  while(cont < numEntradas){
    isPalindromo = 1;
    fgets(string, 255, stdin);
    string[strlen(string)-1] = '\0';
    tam = strlen(string);
    for(inicio=0, final=(tam-1); final >= 0; ) {
      if (string[inicio] == ' ') {
        inicio++;
        continue;
      } else if (string[final] == ' ') {
        final--;
        continue;
      } else if(toupper(string[inicio]) != toupper(string[final])) {
        isPalindromo = 0;
        break;
      }
      final--;
      inicio++;
    }
    if(isPalindromo) {
      printf("SIM\n");
    } else {
      printf("NAO\n");
    }
    cont++;
  }
  return 0;
}
