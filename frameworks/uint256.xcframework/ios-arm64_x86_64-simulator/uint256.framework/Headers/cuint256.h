#ifndef _CUINT256_H_
#define _CUINT256_H_

#include <stdint.h>
#include <stdbool.h>

typedef struct uint128_t { uint64_t elements[2]; } __attribute__((__packed__)) uint128_t;

typedef struct uint256_t { uint128_t elements[2]; } __attribute__((__packed__)) uint256_t;

#define UPPER_P(x) x->elements[0]
#define LOWER_P(x) x->elements[1]
#define UPPER(x) x.elements[0]
#define LOWER(x) x.elements[1]

void readu128BE(const uint8_t *buffer, uint128_t *target);
void readu256BE(const uint8_t *buffer, uint256_t *target);
bool zero128(const uint128_t *number);
bool zero256(const uint256_t *number);
void copy128(uint128_t *target, const uint128_t *number);
void copy256(uint256_t *target, const uint256_t *number);
void clear128(uint128_t *target);
void clear256(uint256_t *target);
void shiftl128(const uint128_t *number, uint32_t value, uint128_t *target);
void shiftr128(const uint128_t *number, uint32_t value, uint128_t *target);
void shiftl256(const uint256_t *number, uint32_t value, uint256_t *target);
void shiftr256(const uint256_t *number, uint32_t value, uint256_t *target);
uint32_t bits128(const uint128_t *number);
uint32_t bits256(const uint256_t *number);
bool equal128(const uint128_t *number1, const uint128_t *number2);
bool equal256(const uint256_t *number1, const uint256_t *number2);
bool gt128(const uint128_t *number1, const uint128_t *number2);
bool gt256(const uint256_t *number1, const uint256_t *number2);
bool gte128(const uint128_t *number1, const uint128_t *number2);
bool gte256(const uint256_t *number1, const uint256_t *number2);
void add128(const uint128_t *number1, const uint128_t *number2, uint128_t *target);
void add256(const uint256_t *number1, const uint256_t *number2, uint256_t *target);
void minus128(const uint128_t *number1, const uint128_t *number2, uint128_t *target);
void minus256(const uint256_t *number1, const uint256_t *number2, uint256_t *target);
void or128(const uint128_t *number1, const uint128_t *number2, uint128_t *target);
void or256(const uint256_t *number1, const uint256_t *number2, uint256_t *target);
void and128(const uint128_t *number1, const uint128_t *number2, uint128_t *target);
void and256(const uint256_t *number1, const uint256_t *number2, uint256_t *target);
void xor128(const uint128_t *number1, const uint128_t *number2, uint128_t *target);
void xor256(const uint256_t *number1, const uint256_t *number2, uint256_t *target);
void not128(const uint128_t *number, uint128_t *target);
void not256(const uint256_t *number, uint256_t *target);
void mul128(const uint128_t *number1, const uint128_t *number2, uint128_t *target);
void mul256(const uint256_t *number1, const uint256_t *number2, uint256_t *target);
void divmod128(const uint128_t *l, const uint128_t *r, uint128_t *div, uint128_t *mod);
void divmod256(const uint256_t *l, const uint256_t *r, uint256_t *div, uint256_t *mod);
bool tostring128(const uint128_t *number, uint32_t base, char *out,
                 uint32_t outLength);
bool tostring256(const uint256_t *number, uint32_t base, char *out,
                 uint32_t outLength);
#endif /* _UINT256_H_ */
