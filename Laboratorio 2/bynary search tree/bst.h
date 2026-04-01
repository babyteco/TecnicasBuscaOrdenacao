#ifndef _BST_H
#define _BST_H

typedef struct arvore Arvore;

Arvore* BST_init();

Arvore* add_node(Arvore *a, int chave);

void destruct_BST(Arvore *a);

int BST_height(Arvore *a);

#endif