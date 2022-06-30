/**
 * @file vector.h
 * @author arisien (arisien@vivaldi.net)
 * @brief Vector data structure. Element data is copied to array.
 * @version 0.1
 * @date 2022-06-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef CIRCIOS_VECTOR_H
#define CIRCIOS_VECTOR_H

#include <stdlib.h>

#include "../utils/bytes.h"

/**
 * @brief Data structure for storing unknown amount of elements.
 * 
 * Dynamically reallocating array. Expands when it runs out of space.
 * 
 */
typedef struct _Vector {
    size_t el_size;
    size_t cap;
    size_t len;
    void* ptr;
} Vector;

/**
 * @brief Construct a new Vector.
 * 
 * @param el_size Size of an individual element.
 * @param cap The initial capacity of the vector.
 * @return Vector* Pointer to the Vector.
 */
Vector* vector_contruct (size_t el_size, size_t cap);

/**
 * @brief Destroys a Vector and frees all allocated memory.
 * 
 * @param vec The vector to destroy.
 */
void vector_destroy (Vector* vec);

/**
 * @brief Expands capcity of a Vector.
 * 
 * @param vec The vector to expand.
 * @param amount The amount of elements to expand by.
 */
void vector_expand (Vector* vec, size_t amount);

/**
 * @brief Append an element to the end of the vector.
 * 
 * Doubles capacity if it runs out of space.
 * 
 * Increases length by 1.
 * 
 * @param vec The vector to add to.
 * @param data The element to append.
 */
void vector_add (Vector* vec, void* data);

/**
 * @brief Set an element in the Vector.
 * 
 * The vector will expand to position if its larger then capacity.
 * 
 * The vector with lengthen to position if you set it past current length.
 * 
 * @param vec The vector to set in.
 * @param data Data to set.
 * @param pos Position to set at.
 */
void vector_set (Vector* vec, void* data, size_t pos);

/**
 * @brief Get element at position in Vector.
 * 
 * @param vec The vector.
 * @param pos The position in the vector.
 * @return void* Pointer to the element.
 */
void* vector_get (Vector* vec, size_t pos);

/**
 * @brief Remove element at position in Vector.
 * 
 * Will ofset all elements after position to the left.
 * 
 * Shortens length by 1.
 * 
 * @param vec The vector to remove from.
 * @param pos The position to remove at.
 */
void vector_remove(Vector* vec, size_t pos);

#endif