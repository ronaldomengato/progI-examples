#include <stdio.h>
#include <stdlib.h>

int soma_recursiva(int *vetor, int indice, int tam){
    if(indice==tam-1){
        return vetor[indice];
    } else{
        return vetor[indice] + soma_recursiva(vetor, indice+1, tam);
    }
}

int procurar(int *vetor, int tam, int indice, int num){
    if(indice==tam){
        return -1;
    } else if(vetor[indice] == num){
        return indice;
    } else{
        return procurar(vetor, tam, indice+1, num);
    }
}

int main(){
    int vet[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("Soma recursiva: %d", soma_recursiva(vet, 0, 10));
    int buscar;
    printf("\nDigite o numero para buscar: ");
    scanf("%d", &buscar);
    int result = procurar(vet, 10, 0, buscar);
    if(result != -1){
        printf("\nO numero %d esta na posicao %d", buscar, result);
    } else{
        printf("\nNumero nao encontrado.");
    }
    return 0;
}
