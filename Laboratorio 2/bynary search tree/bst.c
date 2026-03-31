#include <stdio.h>
#include <stdlib.h>

typedef struct arvore {
    int chave;
    Arvore *dir;
    Arvore *esq;
} Arvore;

Arvore* BST_init(){
    return NULL;
}

Arvore* add_node(Arvore *a, int chave){
    if (a == NULL){
        Arvore *new = (Arvore*) malloc(sizeof(Arvore));
        new->chave = chave;
        new->dir = NULL;
        new->esq = NULL;
        a = new;
        return a;
    }

    if (chave < a->chave) return add_node(a->esq, chave);
    else if (chave > a->chave) return add_node(a->dir, chave);
    else return a;
}

void destruct_BST(Arvore *a){
    if (a != NULL) {
        destruct_BST(a->dir);
        destruct_BST(a->esq);
        free(a);    
    }

    return NULL;
}

int BST_height(Arvore *a){
    if (a == NULL) return 0;
    
    int qtd =  0;
    
}
