#include <stdio.h>
#include <stdlib.h>

int main() {
  char palavra[100];
  char vogais[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  int tam = 0;
  int cont = 0;
  fgets(palavra, 100, stdin);
  for(int i=0; i < 100; i++) {
    if(palavra[i] == '\0') {
      break;
    }
    tam++;
  }
  for(int i=0; i < 10; i++) {
    for(int j=0; j < tam; j++) {
      if(vogais[i] == palavra[j]) {
        cont++;
      }
    }
  }
  printf("Vogais: %d\n", cont);
  return 0;
}
