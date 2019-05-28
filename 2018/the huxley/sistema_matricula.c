#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct aluno{
    char codigo[30];
    char nome[500];
    int idade;
    int sexo;
    float nota;
} Aluno;

typedef struct discplina{
    char codigo[25];
    char nome[100];
} Disciplina;

typedef struct matricula{
    char cod_aluno[30];
    char cod_disciplina[25];
} Matricula;

typedef struct saida{
    int qtde_masculino;
    int qtde_feminino;
    float media_idade;
    float media_idade_notas;
} Saida;

//função para ordenar as disciplinas por ordem alfabetica
void ordenar_disciplinas(Disciplina *disciplinas, int tam){
    int i, j;
    Disciplina aux;
    for(i=0; i < tam; i++){
        for(j=0; j < tam; j++){
            //compara os nomes da disciplina por ordem alfabetica
            if(strcmp(disciplinas[i].nome, disciplinas[j].nome) < 0){
                aux = disciplinas[i];
                disciplinas[i] = disciplinas[j];
                disciplinas[j] = aux;
            }
        }
    }
}

//ordernar os nomes por ordem alfabetica e depois imprimir
void ordenar_imprimir_alunos(Aluno *alunos, int tam){
    int i, j;
    Aluno aux;
    for(i=0; i < tam; i++){
        for(j=0; j < tam; j++){
            if(strcmp(alunos[i].nome, alunos[j].nome) < 0){
                aux = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = aux;
            }
        }
    }

    for(i=0; i < tam; i++){
        printf("%s\n", alunos[i].nome);
    }
}

int main() {
    int qtde_alunos = 0;
    int qtde_disciplinas = 0;
    int qtde_matriculas = 0;
    int cont_nota = 0; //contador dos alunos que tiraram mais que 7.5
    int i=0, j=0, m=0;
    Saida saida;
    //inicializando os valores das variáveis de saída
    saida.media_idade = 0;
    saida.media_idade_notas = 0;
    saida.qtde_feminino = 0;
    saida.qtde_masculino = 0;

    scanf("%d", &qtde_alunos);
    Aluno alunos[qtde_alunos];

    //ler alunos
    for(i=0; i < qtde_alunos; i++){
        scanf("%s", &alunos[i].codigo);
        getchar();
        fgets(alunos[i].nome, 500, stdin);
        scanf("%d", &alunos[i].idade);
        scanf("%d", &alunos[i].sexo);
        scanf("%f", &alunos[i].nota);

        alunos[i].nome[strlen(alunos[i].nome)-1] = 0;

        saida.media_idade += alunos[i].idade;
        if(alunos[i].sexo == 0){
            saida.qtde_feminino++;
        } else{
            saida.qtde_masculino++;
        }

        if(alunos[i].nota > 7.5){
            saida.media_idade_notas += alunos[i].idade;
            cont_nota++;
        }
    }

    //calcular as medias para saida
    saida.media_idade = saida.media_idade / qtde_alunos;
    saida.media_idade_notas = saida.media_idade_notas / cont_nota;

    //ler a quantidade de disciplinas e criar a lista
    scanf("%d", &qtde_disciplinas);
    Disciplina disciplinas[qtde_disciplinas];

    //ler as disciplinas
    for(i=0; i < qtde_disciplinas; i++){
        scanf("%s", &disciplinas[i].codigo);
        getchar();
        fgets(disciplinas[i].nome, 100, stdin);
        disciplinas[i].nome[strlen(disciplinas[i].nome)-1] = 0;
    }

    ordenar_disciplinas(disciplinas, qtde_disciplinas);

    scanf("%d", &qtde_matriculas);
    Matricula matriculas[qtde_matriculas];

    for(i=0; i < qtde_matriculas; i++){
        scanf("%s %s", &matriculas[i].cod_aluno, &matriculas[i].cod_disciplina);
    }

    printf("%d\n", saida.qtde_masculino);
    printf("%d\n", saida.qtde_feminino);
    printf("%.2f\n", saida.media_idade);
    printf("%.2f\n", saida.media_idade_notas);

    //imprimir as disciplinas e os alunos de cada uma delas
    for(i=0; i < qtde_disciplinas; i++){
        printf("%s\n", disciplinas[i].nome);
        int qtde_alunos_matriculados = 0;

        //percorre as matriculas pra ver quantos alunos matriculados na disciplina atual
        for(j=0; j < qtde_matriculas; j++){
            if(strcmp(disciplinas[i].codigo, matriculas[j].cod_disciplina) == 0){
                qtde_alunos_matriculados++;
            }
        }

        printf("%d\n", qtde_alunos_matriculados);

        //se tem alunos matriculados deve-se criar um array para guarda-los
        if(qtde_alunos_matriculados > 0){
            Aluno alunos_matriculados[qtde_alunos_matriculados];
            int cont_alunos_matriculados = 0; //conta a posicao do array de alunos matriculados
            //busca os alunos matriculados na disciplina atual (disciplina[i])
            for(j=0; j < qtde_matriculas; j++){
                for(m=0; m < qtde_alunos; m++){
                    /*
                     *comparacao do codigo da disciplina e necessario pois os alunos podem
                     *estar em mais de uma disciplina, e aqui eu estou interessado apenas nos
                     *que estão vinculados a disciplina atual.
                    */
                    if((strcmp(disciplinas[i].codigo, matriculas[j].cod_disciplina) == 0)
                            && strcmp(matriculas[j].cod_aluno, alunos[m].codigo) == 0){
                        alunos_matriculados[cont_alunos_matriculados] = alunos[m];
                        cont_alunos_matriculados++;
                        break; //depois que eu achei o aluno eu posso seguir no for das matriculas
                    }
                }
            }
            //chama a funcao de ordenar e ja imprime os alunos da disciplina atual
            ordenar_imprimir_alunos(alunos_matriculados, qtde_alunos_matriculados);
        }
    }

	return 0;
}
