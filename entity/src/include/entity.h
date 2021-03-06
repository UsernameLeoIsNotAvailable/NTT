//
// Created by leonard on 13.03.21.
//

#ifndef ENTITY_ENTITY_H
#define ENTITY_ENTITY_H

#include "basic_finite_fields.h"
#include "basic_ntt_engine.h"
#include "fast_ntt_engine.h"

using FiniteField32 = BasicFiniteField<uint32_t, uint64_t>;
using BasicNttEngine32 = BasicNttEngine<uint32_t, uint64_t>;
using FastNttEngine32 = FastNttEngine<uint32_t , uint64_t>;

#ifdef __SIZEOF_INT128__

using FiniteField64 = BasicFiniteField<uint64_t, __uint128_t>;
using BasicNttEngine64 = BasicNttEngine<uint64_t, __uint128_t>;
using FastNttEngine64 = FastNttEngine<uint32_t, uint64_t>;

#endif

#endif //ENTITY_ENTITY_H
