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
int main() {
    int inteiros[] = {1,2,3,4,4,5,5,6,7,8,9,10};
    int size = sizeof(inteiros) / sizeof(inteiros[0]);
    int target = 7;

    int result = buscaBinaria(inteiros,size, target);
    printf("ENCONTRADO EM: %d\n", result);
    return 0;
}
 