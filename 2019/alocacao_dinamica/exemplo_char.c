#include <stdlib.h>
#include <stdio.h>

int main(){
    char * str;
    str = (char *) malloc(50 * sizeof(char));
    gets(str);
    puts(str);
    free(str);
    return 0;
}
