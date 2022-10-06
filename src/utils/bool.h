#ifndef CIRCIOS_BOOL_H
#define CIRCIOS_BOOL_H

#include <stdlib.h>

#include "bytes.h"

/**
 * @brief Toggle a boolean flag within your data.
 * 
 * @param dta Your array of bools.
 * @param pos The bit in question.
 */
void bool_tgl (byte* dta, size_t pos);

/**
 * @brief Set a boolean flag within your data.
 * 
 * @param dta Your array of bools.
 * @param pos The bit in question.
 */
void bool_set (byte* dta, size_t pos);

/**
 * @brief Clear a boolean flag within your data.
 * 
 * @param dta Your array of bools.
 * @param pos The bit in question.
 */
void bool_clr (byte* dta, size_t pos);

/**
 * @brief Fetch a boolean flag within your data.
 * 
 * @param dta Your array of bools.
 * @param pos The bit in question.
 * @return byte The value of the selected flag.
 */
byte bool_fch (byte* dta, size_t pos);

/**
 * @brief Generate an array of flags to store booleans in.
 * 
 * @param cnt The amount of flags you want.
 * @return byte* Pointer to the array.
 */
byte* bool_gen (size_t cnt);

#endif