#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[255];
    char letra;

    gets(str);
    scanf("%c", &letra);

    int i=0;
    int cont=0;
    while(str[i] != '\0'){
        if(str[i] == letra){
            cont++;
        }
        i++;
    }

    printf("A letra %c aparece %d vez(es) na palavra %s", letra, cont, str);
}
