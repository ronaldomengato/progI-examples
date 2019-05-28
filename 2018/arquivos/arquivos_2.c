#include <stdio.h>
#include <stdlib.h>

char nome_arquivo[] = "lista_compras.txt";

void visualizar_lista(){
    FILE * arquivo = fopen(nome_arquivo, "r");
    char item[30];
    if(arquivo == NULL){
        printf("falha ao abrir arquivo!\n");
        return;
    }
    system("cls");
    printf("**** LISTA DE COMPRAS ****\n");
    while(fgets(item, 30, arquivo) != NULL){
        printf(" * %s", item);
    }
    printf("**************************\n");
    fclose(arquivo);
}

int cadastrar_item(char * item){
    FILE * arquivo = fopen(nome_arquivo, "a");
    if(arquivo == NULL){
        printf("falha ao abrir arquivo!\n");
        return 0;
    }
    fprintf(arquivo, "%s\n", item);
    fclose(arquivo);
    return 1;
}

int main(){
    FILE * arquivo;
    int op=0;
    char str[30];
    do{
        printf("1 - Cadastrar\n2 - Listar \n3 - Sair\nOpcao: ");
        scanf("%d", &op);
        switch(op){
            case 1:
                printf("\nDigite o item da lista: ");
                scanf("%s", &str);
                if(cadastrar_item(str)){
                    system("cls");
                    printf("\nItem inserido com sucesso!\n");
                }
                break;
            case 2:
                visualizar_lista();
                break;
        }
    } while(op != 3);
    return 0;
}
