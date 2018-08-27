#include <stdio.h>
#include <stdlib.h>

void exerc1(){
    int a = 25;
    int *pa = &a;
    int b = *pa + a;
    printf("%d %d %d %d %d %d\n", a, pa, &a, *pa, b, &b);
}

void exerc2(){
    char array[] = "programacao I em c";
    char * pointer = array;
    puts(array);
    puts(pointer);
}

void exerc3(){
    float numeros[] = {1.0, 2.0, 5.5, 9.0, 8.1};
    float * p;
    int i;
    for(i=0; i < 5; i+=2){
        p = &numeros[i];
        *p = numeros[i] + 5.0;
    }
    for(i=0; i < 5; i++){
        printf("%.1f ", numeros[i]);
    }

}

void exerc4(){
    float numeros[] = {1.0, 2.0, 5.5, 9.0, 8.1};
    float * p = numeros;
    printf("%x %x %x", p, numeros, &numeros);
}

void exerc5(){
    int    valor;
  int   *p1;
  float  temp;
  float *p2;
  char   aux;
  char  *nome = "Algoritmos";
  char  *p3;
  int    idade;
  int    vetor[3];
  int   *p4;
  int   *p5;

  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("(a) %d \n", valor);

  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("(b) %.1f \n", temp);

  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("(c) %c \n", aux);

  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("(d) %c \n", aux);

  /* (e) */
  p3 = nome;
  printf("(e) %c \n", *p3);

  /* (f) */
  p3 = p3 + 4;
  printf("(f) %c \n", *p3);

  /* (g) */
  p3--;
  printf("(g) %c \n", *p3);

  /* <h> */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("(h) %d \n", idade);

  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("(i) %d \n", idade);

  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("(j) %d \n", idade);

  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("(l) %d \n", idade);

  /* (m) */
  p5 = &vetor[2] - 1;
  printf("(m) %d \n", *p5);

  /* (n) */
  p5++;
  printf("(n) %d \n", *p5);
}

int main()
{
    int opcao=0;

    printf("\n1 - Exercio 1 \n2 - Exercicio 2\n3 - Exercicio 3\n4 - Exercicio 4\n5 - Exercicio 5\nOpcao: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            exerc1();
            break;
        case 2:
            exerc2();
            break;
        case 3:
            exerc3();
            break;
        case 4:
            exerc4();
            break;
        case 5:
            exerc5();
            break;
        default:
            break;
    }

    return 0;
}
