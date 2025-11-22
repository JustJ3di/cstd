#pragma once

#define string_view const char *

typedef struct {
    int len;
    char *str;
}str_view;



#define make_string(value) #value

