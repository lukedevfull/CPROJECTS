#include <stdio.h>
#include <stdlib.h>

// Função para trocar os valores de dois inteiros usando ponteiros
void trade (int *a, int *b){
    int temp = *a;  // Armazena o valor de a temporariamente
    *a = *b;        // Atribui o valor de b a a
    *b = temp;      // Atribui o valor temporário (antigo a) a b
}

// Função de ordenação Bubble Sort - ordena o array em ordem crescente
void bubbleSort(int arr[], int size) {
    // Loop externo - controla quantas passagens são feitas
    for (int i =0; i < size - 1; i++) {

        // Loop interno - compara elementos adjacentes
        for (int j = 0; j < size -1; j++) {

            // Se o elemento atual for maior que o próximo, troca
            if (arr[j] > arr[j + 1]) {
                trade(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Função para imprimir os elementos do array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Teste da função trade
    int a = 10;
    int b = 20;
    
    trade(&a, &b);  // Troca os valores de a e b

    printf("After trade:\n");
    printf("a = %d, b = %d\n", a, b);
    printf("------------------------------\n");

    // Teste do Bubble Sort
    printf("Testing bubble sort\n");
    int arr[] = {64, 34, 163, 256, 80, 150, 125, 99, 42, 1, 0};

    // Calcula o tamanho do array
    int size = sizeof(arr) / sizeof(arr[0]);
     
    printf("Original array: ");
    printArray(arr, size);
    printf("------------------------------\n");
    
    // Ordena o array usando Bubble Sort
    bubbleSort(arr, size);
    
    printf("Sorted array: ");
    printArray(arr, size);
    printf("------------------------------\n");
    
    return 0;
}