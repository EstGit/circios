/**
 * @file bytes.h
 * @author arisien (arisien@vivaldi.net)
 * @brief Definition for byte type and related functions.
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef CIRCIOS_BYTES_H
#define CIRCIOS_BYTES_H

#include <stddef.h>

/**
 * @brief Byte data type
 * 
 * Equivalent to unsigned char.
 */
#define byte unsigned char

/**
 * @brief Copy bytes from one location to another.
 * 
 * @param src Where to read from.
 * @param dest Where to write to.
 * @param len Number of bytes write.
 */
void bytes_copy (const byte* src, byte* dest, const size_t len);

/**
 * @brief Compare bytes from two locations.
 * 
 * @param ptr1 First byte location.
 * @param ptr2 Second byte location.
 * @param len Number of bytes to compare.
 * @return char Result of byte comparison
 */
char bytes_compare (const byte* ptr1, const byte* ptr2, const size_t len);

/**
 * @brief Invert order of bytes in word.
 * 
 * @param src Location of bytes
 * @param size Size of word.
 */
void bytes_invert (byte* src, const size_t size);

#endif