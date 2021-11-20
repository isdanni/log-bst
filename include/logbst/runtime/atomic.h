#pragma once

/**
 * Update log behaviour by atomic instructions on different machines.
 * **/

#define DEFINE_ATOMIC_BEHAVIOUR(T)

DEFINE_ATOMIC_BEHAVIOUR(u32)
DEFINE_ATOMIC_BEHAVIOUR(u64)

#define DEFINE_ATOMIC_RATE(T, OPT)

DEFINE_ATOMIC_RATE(u32, add)
DEFINE_ATOMIC_RATE(u64, OPT)
