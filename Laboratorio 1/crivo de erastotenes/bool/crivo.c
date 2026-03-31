#include "crivo.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void sieveInit(bool *array, int N){
    for (int i = 0; i < N-2; i++){
        array[i] = false;
    }
}

void printPrimes(bool *array, int N){
    for (int i = 0; i < N-2; i++){
        if (!array[i]){
            printf("%d\n", i+2);
        }
    }
}

void markVector(bool *array, int N){
    for (int j = 2; j < N; j++){
        for (int i = 2; i*j < N; i++){
            int idx = i*j - 2;
            array[idx] = true;
        }
    }
}