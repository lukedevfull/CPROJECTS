#include <stdio.h>
#include <stdlib.h> // Biblioteca para alocação dinâmica de memória

int main() {
    int* numbers = (int*)malloc(3 * sizeof(int));
    // Alocando memória para 3 inteiros
    if (numbers == NULL) {
        printf("Erro ao alocar memória");
        return 1;
    }

    void numbersAlocation(int i, int value){
        numbers[i - 1] = value;
    }
    //Alocando em hardcode
    numbersAlocation(1, 1);
    numbersAlocation(2, 5);
    numbersAlocation(3, 10);


    //imprimindo
    for(int i = 0; i < 3; i++){
        printf("number[%d] = %d\n", i, numbers[i]);
    }
    printf("-------------------------\n");

    numbers = (int*)realloc(numbers, 10 * sizeof(int));
    //novo tamanho da memoria alocada

    numbersAlocation(4, 15);
    numbersAlocation(5, 20);
    numbersAlocation(6, 25);
    numbersAlocation(7, 30);
    numbersAlocation(8, 35);
    numbersAlocation(9, 40);
    numbersAlocation(10, 45);

    //imprimindo
    for(int i = 0; i < 10; i++){
        printf("number[%d] = %d\n", i, numbers[i]);
    }
    printf("-------------------------\n");

    free(numbers);  // Libera a memória alocada
    return 0;
}