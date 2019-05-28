#include <stdio.h>
#include <stdlib.h>

void criptografia(char * str, char a, char b){
    int i=0;
    for(i=0; i < 50; i++){
        if(str[i] == a){
            str[i] = b;
        }
    }
}

int main(){

    char string[50];
    char antigo, novo;

    fgets(string, 50, stdin);

    scanf("%c %c", &antigo, &novo);

    criptografia(string, antigo, novo);

    puts(string);

}
