#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAM_SENHA 20
#define true 1
#define false 0

int i;
int ascii_code;

int verificacao_fraca(char * psenha){
    int tam = strlen(psenha);
    if(tam >= 6 && tam < 8){
        return true;
    } else{
        return false;
    }
}

int verificacao_media(char * psenha){
    if(strlen(psenha) < 12){
        if(possui_letra(psenha) && possui_numero(psenha)){
            return true;
        }
    }
    return false;
}

int verificacao_forte(char * psenha){
    if(strlen(psenha) >= 12){
        if(possui_letra(psenha) && possui_numero(psenha)){
            for(i=0; i < strlen(psenha); i++){
                if(psenha[i] == '@' || psenha[i] == '$' || psenha[i] == '*'){
                    return true;
                }
            }
        }
    }
    return false;
}

int possui_letra(char * psenha){
    //verifica se possui letras
    for(i=0; i < TAM_SENHA; i++){
        ascii_code = (int) psenha[i];
        if((ascii_code >=65 && ascii_code <= 90) || (ascii_code >=97 && ascii_code <= 122)){ //verifica se possui letra minúscula ou maiúscula
            return true;
        }
    }
    return false;
}

int possui_numero(char * psenha){
    for(i=0; i < TAM_SENHA; i++){
        ascii_code = (int) psenha[i];
        if((ascii_code >=48 && ascii_code <= 57)){ //verifica se possui numeros
            return true;
        }
    }
    return false;
}

int main(){
    char * senha;
    senha = (char *) calloc(TAM_SENHA, sizeof(char));
    fgets(senha,TAM_SENHA, stdin);
    senha[strlen(senha)-1] = 0;

    if(strlen(senha) < 6){
        printf("senha invalida\n");
    } else if(verificacao_fraca(senha)){
        printf("senha fraca\n");
    } else if(verificacao_media(senha)){
        printf("senha media\n");
    } else if(verificacao_forte(senha)){
        printf("senha forte\n");
    }

    return 0;

}
