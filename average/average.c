#include <stdio.h>

int main(void){
  float pont1, pont2, pont3, average;
  char name[20];
  double matriculation;

  printf("Programa para calculo da média\n");

  //Aluno A
  printf("Digite o nome: ");
  scanf("%s", &name);
  printf("Digite a matricula: ");
  scanf("%lf", &matriculation);
  printf("Digite a primeira nota: ");
  scanf("%f", &pont1);
  printf("Digite a segunda nota: ");
  scanf("%f", &pont2);
  printf("Digite a terceira nota: ");
  scanf("%f", &pont3);

  average = (pont1 + pont2 + pont3) / 3;

  printf("A média é %.2f\n", average);

  //Aluno B
  printf("Digite o nome: ");
  scanf("%s", &name);
  printf("Digite a matricula: ");
  scanf("%lf", &matriculation);
  printf("Digite a primeira nota: ");
  scanf("%f", &pont1);
  printf("Digite a segunda nota: ");
  scanf("%f", &pont2);
  printf("Digite a terceira nota: ");
  scanf("%f", &pont3);

  average = (pont1 + pont2 + pont3) / 3;

  printf("A média é %.2f\n", average);

  //Aluno C
  printf("Digite o nome: ");
  scanf("%s", &name);
  printf("Digite a matricula: ");
  scanf("%lf", &matriculation);
  printf("Digite a primeira nota: ");
  scanf("%f", &pont1);
  printf("Digite a segunda nota: ");
  scanf("%f", &pont2);
  printf("Digite a terceira nota: ");
  scanf("%f", &pont3);

  average = (pont1 + pont2 + pont3) / 3;

  printf("A média é %.2f\n", average);

  return 0;
}