// This file is generated by Words_generate.py.

#pragma once

#include <cstddef>
#include <cstdint>

namespace common {

extern const char *const word_ptrs[];
extern const uint32_t word_crc32_adj[];
extern const uint32_t *const words_bylen[];
extern const char *raw_words[];

enum { WORDS_COUNT = 2048, WORDS_MIN_LEN = 3, WORDS_MAX_LEN = 8, BITS_PER_WORD = 11 };

}  // namespace common