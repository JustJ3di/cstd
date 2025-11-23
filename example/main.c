#include "stack/stack.h"
#include "vector/vector.h"


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

    printf("%d",st_get_min(st_min));


    return 0;
}
