#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "item.h"

extern void sort(Item *a, int lo, int hi);

void leArray(Item *array, int N){
    for (int i = 0; i < N; i++){
        scanf("%d", &array[i]);
    }
}

void imprimeArray(Item *array, int N){
    for (int i = 0; i < N; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    int N = atoi(argv[1]);
    Item *array = (Item*) malloc(sizeof(Item) * N);
    
    leArray(array, N);
    
    clock_t start = clock();
    sort(array, 0, N-1);
    clock_t end = clock();
    double seconds = ((double) end - start) / CLOCKS_PER_SEC;
    printf("Tempo de execucao: %lf segundos\n", seconds);
    
    
    //imprimeArray(array, N);    
    free(array);

    return 0;
}