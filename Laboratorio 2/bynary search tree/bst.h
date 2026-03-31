#ifndef _BST_H
#define _BST_H

typedef struct arvore Arvore;

Arvore* BST_init();

void add_node(Arvore *a, int chave);

void destruct_BST(Arvore *a);

#endif