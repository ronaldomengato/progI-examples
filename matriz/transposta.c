#include <stdio.h>
#include <stdlib.h>

#define TAM_LIN 3
#define TAM_COL 2

int main()
{
    int matrizA[TAM_LIN][TAM_COL];
    int linha_transposta = TAM_COL;
    int coluna_transposta = TAM_LIN;
    int transposta[linha_transposta][coluna_transposta];
    int linha,coluna;

    for(linha=0; linha < TAM_LIN; linha++){
        for(coluna=0; coluna < TAM_COL; coluna++){
          printf("\ninsira A[%d][%d]: ",linha,coluna);
            scanf("%d",&matrizA[linha][coluna]);
        }
    }

    for(linha=0; linha < linha_transposta; linha++){
        for(coluna=0; coluna < coluna_transposta; coluna++){
            transposta[linha][coluna] = matrizA[coluna][linha];
        }
    }


    printf("\n");
    for(linha=0; linha < linha_transposta; linha++){
        for(coluna=0; coluna < coluna_transposta; coluna++){
            printf("%d\t", transposta[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
