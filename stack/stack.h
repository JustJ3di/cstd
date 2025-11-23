#pragma once

#define stack(type, size_max) struct{type st[size_max]; unsigned i; }
#define st_init(st) ((st).i = 0)
#define st_push(stack, element) ((stack).st[(st).i++] = element)
#define st_pop(stack) ((stack).st[--(st).i])
#define st_top(stack) ((stack).st[(st).i-1])
#define st_at(stack, i) ((stack).st[i])
#define st_size(stack) ((stack).i)


#define min_stack(type, size_max) struct{type st[size_max]; type st_min[size_max], unsigned i; unsigned i_min;}
#define min_st_init(st)((st).i = 0; (st).i_min = 0)
#define min_st_push(st,element) { \
    if((st).i==0){  \
        (st).st[(st).i++] = element;    \
        (st).st_min[(st).i_min++] = element;    \
    }else { \
        if((st).st[(st).i-1] > element) (st).st_min[i_min++] = element;\
        (st).st[(st).i++] = element;\
    }   \
}
#define min_st_pop(st)
#define min_st_at(i)
#define min_st_size(st)
#define st_get_min(st)(st_min[i_min-1])
