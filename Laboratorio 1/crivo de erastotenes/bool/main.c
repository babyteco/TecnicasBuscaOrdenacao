#include "crivo.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    int N = atoi(argv[1 ]);
    bool vec[N];

    sieveInit(vec, N);
    markVector(vec, N);
    printPrimes(vec, N);

    return 0;
}