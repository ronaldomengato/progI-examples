#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *s, int len){
    if(len<0){
        return;
    } else{
        printf("%c", s[len]);
        reverse(s, len-1);
    }
}

int main(){
    char string[50];
    printf("Digite a palavra a ser invertida: ");
    fgets(string, 50, stdin);
    string[strlen(string)-1] = 0;
    reverse(string, strlen(string)-1);
}
