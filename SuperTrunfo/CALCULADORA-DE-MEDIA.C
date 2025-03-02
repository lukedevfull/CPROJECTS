#include <stdio.h>

int main() {
  float n1, n2, n3, media;
  
  printf("Digite as 3 notas: ");
  scanf("%f %f %f", &n1, &n2, &n3);
  
  media = (float)(n1 + n2 + n3) / 3;
  printf("A media das notas e %.2f\n", media);
  
  return 0;
}