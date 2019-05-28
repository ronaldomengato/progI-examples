#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindromo(char *palavra, int inicio, int fim){
    int tam = fim - inicio + 1;
    if(tam <= 1){
        return 1; //caso retorne 1 siginifica que é palindromo
    } else{
        if(palavra[inicio] == palavra[fim]){//compara se a primeira posção é igual a última
            return palindromo(palavra, inicio+1, fim-1);
        } else{
            return 0;
        }
    }
}

int main(){
    char frase[50];
    printf("Digite a palavra: ");
    fgets(frase, 50, stdin);
    frase[strlen(frase)-1] = 0;//remove o caractere \n do final da string
    printf("\n%d", palindromo(frase, 0, strlen(frase)-1));
    return 0;
}
