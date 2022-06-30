/**
 * @file bytes.c
 * @author arisien (arisien@vivaldi.net)
 * @brief Implementations for byte functions.
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "bytes.h"

void bytes_copy (const byte* src, byte* dest, const size_t len) {
    for (size_t i = 0; i < len; i++) {
        dest[i] = src[i];
    }
}

char bytes_compare (const byte* ptr1, const byte* ptr2, const size_t len) {
    for (size_t i = 0; i < len; i++) {
        if (ptr1[i] == ptr2[i]) continue;
        return (ptr1[i] > ptr2[i]) * 2 - 1;
    }
    return 0;
}

void bytes_invert (byte* ptr, size_t size) {
    size_t cnt = size / 2 - (size % 2);

    for (size_t i = 0; i < cnt; i++) {
        char tmp = ptr[i];
        ptr[i] = ptr[size-1-i];
        ptr[size-1-i] = tmp;
    }
}