#include "crivo.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int N = atoi(argv[1 ]) / 8;
    
    unsigned char vec[N];

    sieveInit(vec, N);
    markVector(vec, N);
    printPrimes(vec, N);

    return 0;
}