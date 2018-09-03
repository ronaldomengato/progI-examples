#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if(n==1 || n==0){
        return 1;
    } else{
        return n * fatorial(n-1);
    }
}

int main(){
    int x;
    printf("Fatorial!\nDigite o valor de X:");
    scanf("%d", &x);
    printf("\nfat(%d): %d", x, fatorial(x));
    return 0;
}
