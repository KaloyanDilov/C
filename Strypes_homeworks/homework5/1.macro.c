#define SETBIT(mask,bit) (mask |= (1ull << (bit)))
#define CLEARBIT(mask,bit) (mask &= ~(1ull << (bit)))
#define INVERSEBIT(mask,bit) (mask ^= (1ull << (bit)))
#define CHECKBIT(mask,bit) !!(mask & (1ull << (bit)))
#define SWAP(a, b) (a ^= b; b ^= a; a ^= b;)
