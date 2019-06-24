#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char string[400];
    char alf[27]="abcdefghijklmnopqrstuvwxyz";
    char inv[27]="zyxwvutsrqponmlkjihgfedcba";
    int i, j, tam;

    fgets(string, 400,stdin);

    tam=strlen(string);

    for(i=0;i<tam;i++) {
        for(j=0;j<27;j++) {
            if(string[i]==alf[j]){
                string[i]=inv[j];
                break;
            }
        }
    }
    printf("%s\n", string);
	return 0;
}
