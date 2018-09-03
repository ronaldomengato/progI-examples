#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    if(n == 0){
        return 0;
    } else if(n == 1){
        return 1;
    } else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int x;
    printf("Informe o valor de X: ");
    scanf("%d", &x);
    printf("O numero da posicao %d e: %d", x, fibonacci(x));
    return 0;
}
