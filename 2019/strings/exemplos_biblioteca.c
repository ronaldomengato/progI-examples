#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char str[50];
  fgets(str, 50, stdin);
  printf("tamanho eh: %d\n", strlen(str));
  str[strlen(str)-1] = '\0';
  printf("tamanho eh: %d\n", strlen(str));
  printf("%c\n", toupper(str[0]));
}
