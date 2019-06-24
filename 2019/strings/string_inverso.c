#include <stdio.h>
#include <stdlib.h>

int main(){

    char str[255]={0};

    int aux=0;
    gets(str);

    int i;
    for(i=0; i < 255; i++){
        if(str[i] == '\0'){
            break;
        }
    }
    char str2[i];
    int j=0;
    for(; j < i; j++){
        str2[j] = 0;
    }
    i--;
    while(i >= 0){
        if(str[i] != '\0'){
            //printf("%c", str[i]);
            str2[aux] = str[i];
            aux++;
        }
        i--;
    }

    printf("%s", str2);

}
