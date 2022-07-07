/**
 * @file chars.h
 * @author arisien (arisien@vivaldi.net)
 * @brief Definitions for character util functions.
 * @version 0.1
 * @date 2022-07-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef CIRCIOS_CHARS_H
#define CIRCIOS_CHARS_H

/**
 * @brief Checks if a character is [0-9] digit.
 * 
 * @param c The character
 * @return _Bool Resulting True/False
 */
_Bool is_digit (char c);

/**
 * @brief Checks if a character is [a-z] or [A-Z] letter.
 * 
 * @param c The character
 * @return _Bool Resulting True/False
 */
_Bool is_alphabetical (char c);

/**
 * @brief Checks if a character is digit or letter.
 * 
 * @param c The character
 * @return _Bool Resulting True/False
 */
_Bool is_alphanumeric (char c);

/**
 * @brief Checks if character is space or tab.
 * 
 * @param c The character
 * @return _Bool Resulting True/False
 */
_Bool is_space (char c);

/**
 * @brief Checks if character is newline character.
 * 
 * @param c The character
 * @return _Bool Resulting True/False
 */
_Bool is_line (char c);

/**
 * @brief Checks if character is newline or space.
 * 
 * @param c The character
 * @return _Bool Resulting True/False
 */
_Bool is_whitespace (char c);

#endif