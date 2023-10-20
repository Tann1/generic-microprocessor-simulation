#ifndef __REGISTER_FILE_H__
#define __REGISTER_FILE_H__

#include <stdio.h>
#include <string.h>
#include <stdint.h>

/* 
 * 32-bit system
 *
 * operand registers
 * a, b
 *
 * temporary registers
 * t1, t2
 *
 * status register
 * sr
 *
 * control reigster
 * cr
 * program counter
 * pc
 */
typedef struct register_file_s {
    uint32_t a;
    uint32_t b;
    uint32_t t1;
    uint32_t t2;
    uint32_t sr;
    uint32_t cr;
    uint32_t pc;
} register_file_t;

static inline void rf_init(struct register_file_s *rf)
{
    memset(rf, 0, sizeof(struct register_file_s));
}

#endif
