#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[2][5] = {0};
    int lin, col;
    for(lin=0; lin < 2; lin++) {
        for(col=0; col < 4; col++) {
            scanf("%f", &notas[lin][col]);
        }
    }
    for(lin=0; lin < 2; lin++) {
        for(col=0; col < 4; col++) {
            notas[lin][4] += notas[lin][4];
        }
        notas[lin][col] = notas[lin][col] / 4;
    }
    for(lin=0; lin < 2; lin++) {
        printf("\nAluno %d\n", lin+1);
        for(col=0; col < 4; col++) {
            printf("%.2f ", notas[lin][col]);
        }
        printf("M=%.2f\n", notas[lin][col]);
    }
    return 0;
}
