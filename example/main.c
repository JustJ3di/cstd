#include "stack/stack.h"
#include "vector/vector.h"


#include <stdio.h>

int main(int argc, char const *argv[])
{
    stack(int,10) st;
    st_init(st);

    st_push(st,1);

    int  a = st_pop(st);

    printf("%d\n",a);

    printf("%d\n",st_size(st));

    printf("%d\n",st_top(st));


    return 0;
}
