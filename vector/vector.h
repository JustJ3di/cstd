#pragma once

#include <stdlib.h>

#define vector(T) struct { \
	T* data; \
	size_t size; \
	size_t capacity; \
}

#define vector_resize(v, new_capacity) { \
	void *temp_data = realloc((v)->data, (new_capacity) * sizeof((v)->data[0])); \
	if (temp_data == NULL && (new_capacity) > 0) { \
		fprintf(stderr, "Fatal error: realloc failed in vector_resize.\n"); \
		exit(EXIT_FAILURE); \
	} \
	(v)->data = temp_data; \
	(v)->capacity = (new_capacity); \
}

#define vpush_back(v, element) { \
	if ((v)->size >= (v)->capacity) { \
		vector_resize(v, (v)->capacity ? (v)->capacity * 2 : 8); \
	} \
	(v)->data[(v)->size++] = (element); \
}

#define vpop_back(vect)  { \
	if((v)->size > 0) {	\
		(v)->size--;	\
	}	\
}

#define vector_clear(v) { \
	free((v)->data); \
	(v)->data = NULL; \
	(v)->capacity = 0; \
	(v)->size = 0; \
}
