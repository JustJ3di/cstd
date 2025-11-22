#pragma once

#define string_view const char *

typedef struct {
    unsigned long len;
    char *str;
}str_view;



#define to_string(value) #value

