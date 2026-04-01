#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bst.h"

int main(int argc, char *argv[]) {
    int N = atoi(argv[1]);
    Arvore* a = BST_init();
    
    srand(time(NULL));
    for (int i = 0; i < N; i++){
        int r = rand(); // returns a pseudo-random integer between 0 and RAND_MAX
        a = add_node(a, r);
    }
    
    printf("ALTURA MAXIMA DA ARVORE: %d\n", BST_height(a));


    return 0;
}