#include "stack.h"
#include "string_view.h"

#include <stdio.h>

int main(int argc, char const *argv[])
{
    stack(int,10) st;
    st_init(st);

    st_push(st,1);

    int  a = st_pop(st);

    printf("%d\n",a);

    printf("%d\n",st_size(st));

    str_view s = {4,"ciao"};

    char *c = make_string(ciao);

    string_view ss = "ciao";

    return 0;
}
