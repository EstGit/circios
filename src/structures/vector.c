/**
 * @file vector.c
 * @author arisien (arisien@vivaldi.net)
 * @brief Function implementations for Vector data type.
 * @version 0.1
 * @date 2022-06-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "vector.h"

Vector* vector_contruct (size_t el_size, size_t cap) {
    Vector* vector = (Vector*) malloc(sizeof(Vector));
    vector->el_size = el_size;
    vector->cap = cap;
    vector->len = 0;
    vector->ptr = malloc(el_size * cap);
    return vector;
}

void vector_destroy (Vector* vec) {
    free(vec->ptr);
    free(vec);
}

void vector_expand (Vector* vec, size_t amount) {
    void* ptr = vec->ptr;
    vec->ptr = malloc((vec->cap + amount) * vec->el_size);
    bytes_copy(ptr, vec->ptr, vec->cap * vec->el_size);
    free(ptr);
    vec->cap += amount;
}

void vector_add (Vector* vec, void* data) {
    if (vec->len == vec->cap) vector_expand(vec, vec->cap);
    byte* bytes = (byte*) vec->ptr;
    bytes_copy(data, (bytes + vec->len * vec->el_size), vec->el_size);
    vec->len++;
}

void vector_set (Vector* vec, void* data, size_t pos) {
    if (pos > vec->cap) vector_expand(vec, pos - vec->cap);
    byte* bytes = (byte*) vec->ptr;
    bytes_copy(data, (bytes + pos * vec->el_size), vec->el_size);
    if(pos >= vec->len) vec->len = pos + 1;
}

void* vector_get (Vector* vec, size_t pos) {
    byte* bytes = (byte*) vec->ptr;
    return (void*) (bytes + pos * vec->el_size);
}

void vector_remove(Vector* vec, size_t pos) {
    byte* bytes = (byte*) vec->ptr;
    bytes_copy((bytes + (pos + 1) * vec->el_size), (bytes + pos * vec->el_size), (vec->len - (pos + 1)) * vec->el_size);
    vec->len--;
}