#ifndef VECTOR_H
#define VECTOR_H

#include <stddef.h>
#include <stdbool.h>

typedef int element_t;

typedef struct {
    element_t *data;
    size_t size;
    size_t capacity;
}vector_t;

bool vector_init(vector_t *vec, size_t initial_capacity);

void vector_destroy(vector_t *vec);

size_t vector_capcacity(vector_t *vec);
size_t vector_size(vector_t *vec);

bool vector_get(const vector_t *vec, size_t index, element_t *out_val);

bool vector_push_back(vector_t *vec, element_t val);
bool vector_pop_back(vector_t *vec, element_t *out_val);
bool vector_insert(vector_t *vec, size_t index, element_t val);
bool vector_remove(element_t *vel, size_t index, element_t *out_val);

#endif // VECTOR_H