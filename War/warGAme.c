
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_TERRITORIES 5

// Estrutura que define as propriedades de um território
typedef struct {
    char name[50];
    char cor[10];
    int soldados;
} Territory;

int main() {
    // Array para armazenar os dados de todos os territórios
    Territory territories[MAX_TERRITORIES];
    int i;

    // Loop para solicitar e ler os dados de cada território
    for (i = 0; i < MAX_TERRITORIES; i++) {
        printf("Defina o nome do territorio %d: ", i + 1);
        scanf("%49s", territories[i].name);
        printf("Defina a cor do territorio %d: ", i + 1);
        scanf("%9s", territories[i].cor);
        printf("Defina a quantidade de batalhões do territorio %d: ", i + 1);
        scanf("%d", &territories[i].soldados);

        // Exibe confirmação imediata do cadastro
        printf("Terririo Salvo: \n");
        printf("Nome: %s\n", territories[i].name);
        printf("Cor: %s\n", territories[i].cor);
        printf("Soldados: %d\n", territories[i].soldados);
    }

    // Gera e exibe o relatório final formatado
    printf("\n--- Relatório Territorial Salvo ---\n");
    for (i = 0; i < MAX_TERRITORIES; i++) {
        printf("Território %d: %s | Cor: %s | Batalhões: %d\n", 
               i + 1, territories[i].name, territories[i].cor, territories[i].soldados);
    }
    printf("----------------------\n");

    return 0;
}
