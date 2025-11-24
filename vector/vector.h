#pragma once

#include <stdlib.h>

#define vector(T) struct { \
	T* data; \
	size_t size; \
	size_t capacity; \
}

#define viterator(T) T*

#define vector_init(vect)do{\
	(vect).data = malloc(sizeof((vect).data[0])*2);	\
	(vect).size = 0;\
	(vect).capacity = 2;\
}while(0)

#define vector_resize(v, new_capacity) do{ \
	void *temp_data = realloc((v).data, (new_capacity) * sizeof((v).data[0])); \
	if (temp_data == NULL && (new_capacity) > 0) { \
		fprintf(stderr, "Fatal error: realloc failed in vector_resize.\n"); \
		exit(EXIT_FAILURE); \
	} \
	(v).data = temp_data; \
	(v).capacity = (new_capacity); \
}while(0)

#define vpush_back(v, element)do { \
	if ((v).size >= (v).capacity) { \
		vector_resize(v, (v).capacity ? (v).capacity * 2 : 8); \
	} \
	(v).data[(v).size++] = (element); \
}while(0)

#define v_at(v,index) ((v).data[index])

#define vpop_back(vect) do { \
	if((v).size > 0) {	\
		(v).size--;	\
	}	\
}while(0)

#define vinsert_at(v, index, element) do { \
    if ((index) > (v).size) { \
        fprintf(stderr, "Error!"); \
    } else { \
        if ((v).size >= (v).capacity) { \
            vector_resize(v, (v).capacity ? (v).capacity * 2 : 8); \
        } \
        for (unsigned int k = (v).size; k > (index); k--) { \
            (v).data[k] = (v).data[k - 1]; \
        } \
        (v).data[index] = (element); \
        (v).size++; \
    } \
} while(0)

#define vbegin(v) (&((v).data[0]))

#define vend(v) (&((v).data[(v).size]))

#define vector_clear(v) do{ \
	free((v).data); \
	(v).data = NULL; \
	(v).capacity = 0; \
	(v).size = 0; \
}while(0)


