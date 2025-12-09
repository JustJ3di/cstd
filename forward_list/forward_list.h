#pragma once

#include <stddef.h>
#include <stdarg.h>


#define get_data(node,type) *(type *)(node)->p_data

typedef struct node{
    void *p_data;
    struct node *next;
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


void mpush(unsigned npush, ...){

    va_list ap;
    node *s;

    va_start(ap, npush);
    flist *l = va_arg(ap,flist *);
    npush--;
    while (npush--){
        s = va_arg(ap, node *);
        push(l, s);
    }
    
    va_end(ap);
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