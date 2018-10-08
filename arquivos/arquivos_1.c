#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * arquivo;
    char alfabeto[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'w', 'y', 'z' };
    char alfabeto2[] = "abcdefghijklmnopqrstuvxywz";
    arquivo = fopen("teste.txt", "w");
    int i;
//    for(i=0; i < 26; i++){
//        fputc(alfabeto[i], arquivo);
//    }
    fprintf(arquivo, "%s", alfabeto2);
    int num;
    scanf("%d", &num);
    fclose(arquivo);

    arquivo = fopen("teste.txt", "r");
    char temp, lixo;
    for(i=0; i < 26; i++){
        temp = fgetc(arquivo);
        if(temp == EOF){
            printf("caractere nao encontrado\n");
            break;
        }
        else if(num-1 == i){
            printf("%c", temp);
            break;
        }
    }
    fclose(arquivo);
    return 0;
}
