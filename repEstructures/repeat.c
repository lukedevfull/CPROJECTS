#include <stdio.h>
int main(void) {
  int i = 0;
  while (i < 11) {
    if (i % 2 == 0) {
      printf("Valor par: %d\n", i);
    }
    i++;
  }

  // printf("---------------------------------------------\n");

  // int a;
  // do {
  //   printf("Digite um numero par para sair do programa:");
  //   scanf("%d", &a);
  //     if (a % 2 == 0)
  //     {
  //       printf("%d é par\n", a);
  //     } else {
  //         printf("%d é impar\n", a);
  //     }
 
  // } while (a % 2 != 0);
  // printf("NUMERO PAR RECONHECIDO - Fim do programa\n");

  printf("---------------------------------------------\n");
  int b, c;
  printf("Digite um numero para calcular a tabuada:");
  scanf("%d", &b);
  for (c = 0; c <= 10; c++)
  {
    printf("%d x %d = %d\n", b, c, b * c);
  }
  
  return 0;
}