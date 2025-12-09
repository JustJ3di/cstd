#include "stack/stack.h"
#include "vector/vector.h"
#include "forward_list/forward_list.h"
#include "ring_queue/r_queue.h"

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
    min_st_push(st_min, 1);
    min_st_push(st_min, 100);

    printf("min = %d\n\n",st_get_min(st_min));

    vector(int) arr;
    vector_init(arr);

    vpush_back(arr,2);
    vpush_back(arr,5);
    vpush_back(arr, 10);
    vpush_back(arr,12);


    for(viterator(int) i = vbegin(arr) ;i != vend(arr); i++){
        printf("%d\n",*i);
    }

    printf("Test list\n");

    vector_clear(arr);

    flist l;

    init(&l);

    int a = 2;
    int b = 4;

    node n1 = {&a, NULL};
    node n2 = {&b, NULL};

    int o = 100;
    int p  = 120;
    node n3 = {&o,NULL};
    node n4 = {&p,NULL};
    
    mpush(5,&l,&n1,&n2,&n3,&n4);

    for(node *s = l.head; s; s = s->next)
        printf("%d\n",get_data(s,int));

    printf("end test list\n");

    
    rqueue(int,3) rq;
    rqueue_init(rq);
    requeue_push(rq,2);
    requeue_push(rq,1);
    requeue_push(rq,10);


    return 0;
}
