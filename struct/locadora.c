#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct cliente{
    int codigo;
    char nome[100];
    int dia_nascimento;
    int mes_nascimento;
    int ano_nascimento;
};

struct filme{
    int codigo;
    char titulo[100];
    char genero[100];
    int ano;
};

void imprimir_cliente(struct cliente c);
void cadastrar_cliente(struct cliente *c, int codigo);

struct filme cadastrar_filme();
void imprimir_filme(struct filme f);

int main(){
    struct cliente clientes[5];
    struct cliente c;
    struct filme filmes[5];
    struct filme f;
    int cont=0;
    int cfilme=0;
    int opcao=-1;
    int i;
    do{
        printf("** Menu **\n");
        printf("1 - Cadastrar cliente\n2 - Listar clientes\n3 - Cadastrar filme\n4 - Listar filmes\n0 - Sair\nOpcao: ");
        scanf("%d", &opcao);
        getchar();
        switch(opcao){
            case 1:
                if(cont < 5){
                    cadastrar_cliente(&clientes[cont], (cont + 1));
                    cont++;
                } else{
                    printf("\nCliente nao foi adicionado, lista cheia!");
                }
                break;
            case 2:
                printf("******");
                for(i=0; i < cont; i++){
                    imprimir_cliente(clientes[i]);
                }
                printf("******");
                break;
            case 3:
                f = cadastrar_filme();
                if(cfilme < 5){
                    filmes[cfilme] = f;
                    cfilme++;
                } else{
                    printf("\Filme nao foi adicionado, lista cheia!");
                }
                break;
            case 4:
                printf("******");
                for(i=0; i < cfilme; i++){
                    imprimir_filme(filmes[i]);
                }
                printf("******\n");
                break;
        }
    } while(opcao != 0);
}

void imprimir_cliente(struct cliente c){
    printf("\nCodigo: %d \nNome: %s \nData Nascimento: %d/%d/%d\n\n",
           c.codigo, c.nome,
           c.dia_nascimento,
           c.mes_nascimento,
           c.ano_nascimento);
}

void cadastrar_cliente(struct cliente *c, int codigo){
    c->codigo = codigo;
    printf("\nDigite o nome: ");
    fgets(c->nome, 100, stdin);
    c->nome[strlen(c->nome)-1] = 0;
    printf("\nDigite a data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &c->dia_nascimento, &c->mes_nascimento, &c->ano_nascimento);
}

struct filme cadastrar_filme(){
    struct filme ftemp;
    printf("\nDigite o codigo do filme: ");
    scanf("%d", &ftemp.codigo);
    getchar();
    printf("\nDigite o titulo do filme:");
    fgets(ftemp.titulo, 100, stdin);
    ftemp.titulo[strlen(ftemp.titulo) -1] = 0;
    printf("\nDigite o genero do filme:");
    fgets(ftemp.genero, 100, stdin);
    ftemp.genero[strlen(ftemp.genero) -1] = 0;
    printf("\nDigite o ano do filme:");
    scanf("%d", &ftemp.ano);
    getchar();
    return ftemp;
}

void imprimir_filme(struct filme f){
    printf("\nCodigo: %d \nTitulo: %s \nGenero: %s\nAno: %d\n",
           f.codigo, f.titulo,
           f.genero,
           f.ano);
}
