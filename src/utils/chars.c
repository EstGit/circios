/**
 * @file chars.c
 * @author arisien (arisien@vivaldi.net)
 * @brief Implementations for character util functions.
 * @version 0.1
 * @date 2022-07-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
_Bool is_digit (char c) {
    return (c >= '0' && c <= '9');    
}

_Bool is_alphabetical (char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

_Bool is_alphanumeric (char c) {
    return is_digit(c) || is_alphabetical(c);
}

_Bool is_space (char c) {
    return (c == '\t' || c == ' '); 
}

_Bool is_line (char c) {
    return (c == '\r' || c == '\n');
}

_Bool is_whitespace (char c) {
    return is_space(c) || is_line(c);
}