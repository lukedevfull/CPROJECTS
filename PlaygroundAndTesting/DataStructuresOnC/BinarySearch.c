#include <stdio.h>

int buscaBinaria(int arr[], int size, int target) {
    int init = 0;
    int end = size - 1;
    
    while (init <= end) {
        int mid = init + (end - init) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target){
            init = mid + 1;  
        }
        else {
            end = mid -1;
        }
        
    }
    return -1;
}

int linearSearch(int arr[], int target, int size){
    for (int i =0; i < size; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main() {
    int inteiros[] = {1,2,3,4,4,5,5,6,7,8,9,10};
    int size = sizeof(inteiros) / sizeof(inteiros[0]);
    int target = 4;

    int result = buscaBinaria(inteiros,size, target);
    printf("ENCONTRADO EM: %d\n", result);

    printf("==========================\n");    
    int result2 = linearSearch(inteiros, target, size);
    printf("ENCONTRADO EM: %d\n", result2);
    return 0;
}
 