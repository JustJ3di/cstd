#pragma once

#include <stddef.h>

typedef struct node{
    void *p_data;
    struct nodo *next;
}node;

typedef struct flist{
    node *head;
}flist;

void init(flist *l){
    l->head = NULL;
}


void push(flist *l, node *s){
    s->next = l->head;
    l->head = s;
}

void pop(flist *l){
    l->head = l->head->next;
}


void erase(flist *l,node *n){
    if(l->head == n){
        pop(l);
        return;
    }
    node *tmp = l->head;
    while(tmp->next){
        if(tmp->next == n){
            tmp->next = tmp->next->next;
            return;
        }
    }
}