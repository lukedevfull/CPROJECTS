#include <stdio.h>

int main(void) {
  float temp, humidity; // Variáveis de temperatura e umidade
  unsigned int storage; // Variável de armazenamento

  // Entrada de dados
  printf("Digite a temperatura:\n ");
  scanf("%f", &temp);
  printf("Digite a umidade: \n");
  scanf("%f", &humidity);
  printf("Digite o estoque: \n");
  scanf("%u", &storage);

  // Processamento de dados
  temp >= 30 ? printf("A temperatura esta muito Alta!\n") : 
    temp >= 20 ? printf("A temperatura esta Normal!\n") : 
      printf("A temperatura esta muito Baixa!\n");

  humidity >= 80 ? printf("A umidade esta muito Alta!\n") : 
    humidity >= 35 && humidity <= 80 ? printf("A umidade esta Normal!\n") : 
      printf("A umidade esta muito Baixa!\n");

  storage <= 30 ? printf("O estoque esta muito Baixo!\n") : 
    storage <= 100 && storage >= 30 ? printf("O estoque esta Normal!\n") : 
      printf("O estoque esta muito Alto!\n");

  return 0;
}