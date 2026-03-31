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
        add_node(a, r);
    }
    
    


    return 0;
}