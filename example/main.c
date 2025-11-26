#include "stack/stack.h"
#include "vector/vector.h"
#include "forward_list/forward_list.h"

#include <stdio.h>

int main(int argc, char const *argv[])
{
    stack(int,10) st;
    st_init(st);

    st_push(st,1);


    printf("%d\n",st_size(st));

    printf("%d\n",st_top(st));

    min_stack(int,5) st_min;
    min_st_init(st_min);
    min_st_push(st_min,19);
    min_st_push(st_min, 2);
    min_st_push(st_min, 10);

    printf("%d\n\n",st_get_min(st_min));

    vector(int) arr;
    vector_init(arr);

    vpush_back(arr,2);
    vpush_back(arr,5);
    vpush_back(arr, 10);
    vpush_back(arr,12);


    for(viterator(int) i = vbegin(arr) ;i != vend(arr); i++){
        printf("%d\n",*i);
    }

    

    vector_clear(arr);

    flist l;

    init(&l);

    int a = 2;
    int b = 4;
    node n1 = {&a, NULL};
    node n2 = {&b, NULL};
    push(&l,&n1);

    push(&l,&n2);


    printf("%d\n",*(int *)l.head->p_data);

    return 0;
}
