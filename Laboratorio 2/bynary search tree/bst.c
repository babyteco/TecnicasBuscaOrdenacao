#include <stdio.h>
#include <stdlib.h>

typedef struct arvore Arvore;

struct arvore {
    int chave;
    Arvore *dir;
    Arvore *esq;
};

Arvore* BST_init(){
    return NULL;
}

Arvore* add_node(Arvore *a, int chave){
    if (a == NULL){
        a = (Arvore*) malloc(sizeof(Arvore));
        a->chave = chave;
        a->dir = NULL;
        a->esq = NULL;
        return a;
    }

    if (chave < a->chave) a->esq = add_node(a->esq, chave);
    else if (chave > a->chave) a->dir = add_node(a->dir, chave);
    
    return a;
}

void destruct_BST(Arvore *a){
    if (a != NULL) {
        destruct_BST(a->dir);
        destruct_BST(a->esq);
        free(a);    
    }
}

int BST_height(Arvore *a){
    if (a == NULL) return -1;
    else {
        int esq = BST_height(a->esq);
        int dir = BST_height(a->dir);

        if (esq > dir) return esq + 1;
        else return dir + 1;
    }
}
