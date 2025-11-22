#pragma once

#define stack(type, size_max) struct{type st[size_max]; unsigned index; }
#define st_init(st) ((st).index = 0)
#define st_push(stack, element) ((stack).st[(st).index++] = element)
#define st_pop(stack) ((stack).st[--(st).index])
#define st_top(stack) ((stack).st[(st).index-1])
#define st_at(stack, i) ((stack).st[i])
#define st_size(stack) ((stack).index)
