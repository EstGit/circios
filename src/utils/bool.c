#include "bool.h"

void bool_tgl (byte* dta, size_t pos) {
    byte byt = dta[pos/8];

    byt = byt ^ (1 << (7 - pos%8));

    dta[pos/8] = byt;
}

void bool_set (byte* dta, size_t pos) {
    byte byt = dta[pos/8];

    byt = byt | (1 << (7 - pos%8));

    dta[pos/8] = byt;
}
 
void bool_clr (byte* dta, size_t pos) {
    byte byt = dta[pos/8];

    byt = byt & ~(1 << (7 - pos%8));

    dta[pos/8] = byt;
}

byte bool_fch (byte* dta, size_t pos) {
    byte byt = dta[pos/8];

    byt = 1 & (byt >> (7 - pos%8));

    return byt;
}

byte* bool_gen (size_t cnt) {
    return calloc((cnt / 8) + (cnt % 8 > 0), 1);
}