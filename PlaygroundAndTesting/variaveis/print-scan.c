#include <stdio.h>
int main(void) { // Função principal do programa
  // Declaração de variáveis
  char name[20];  // Armazenará o nome do usuário (até 19 caracteres)
  int age;        // Armazenará a idade do usuário
  float weight;   // Armazenará o peso do usuário
  char option;    // Armazenará a opção de salvamento (s/n)

  // Entrada de dados
  printf("Digite seu nome: ");
  scanf("%19s", name);  // Lê o nome com segurança
  
  printf("Digite sua idade: ");
  scanf("%d", &age);    // Lê a idade
  
  printf("Digite seu peso: ");
  scanf("%f", &weight); // Lê o peso

  // Exibição dos dados informados
  printf("\nDados informados:\n");
  printf("Nome: %s\n", name);
  printf("Idade: %d anos\n", age);
  printf("Peso: %.2f kg\n", weight);

  // Opção de salvamento
  printf("\nSalvar dados? [s/n]: ");
  scanf(" %c", &option);  // O espaço antes do %c ignora espaços/quebras de linha anteriores

  return 0;
} 