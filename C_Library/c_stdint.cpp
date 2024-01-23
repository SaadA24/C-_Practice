#include <iostream>
#include <cstdint>
#include <cinttypes>

int main() {
    // Maximum-width integers
    printf("Size of intmax_t: %zu bytes\n", sizeof(intmax_t));
    printf("Size of uintmax_t: %zu bytes\n\n", sizeof(uintmax_t));

    // Fixed-width integers
    printf("Size of int8_t: %zu bytes\n", sizeof(int8_t));
    printf("Size of uint8_t: %zu bytes\n", sizeof(uint8_t));
    printf("Size of int16_t: %zu bytes\n", sizeof(int16_t));
    printf("Size of uint16_t: %zu bytes\n", sizeof(uint16_t));
    printf("Size of int32_t: %zu bytes\n", sizeof(int32_t));
    printf("Size of uint32_t: %zu bytes\n", sizeof(uint32_t));
    printf("Size of int64_t: %zu bytes\n", sizeof(int64_t));
    printf("Size of uint64_t: %zu bytes\n\n", sizeof(uint64_t));

    // Minimum-width integers
    printf("Size of int_least8_t: %zu bytes\n", sizeof(int_least8_t));
    printf("Size of uint_least8_t: %zu bytes\n", sizeof(uint_least8_t));
    printf("Size of int_least16_t: %zu bytes\n", sizeof(int_least16_t));
    printf("Size of uint_least16_t: %zu bytes\n", sizeof(uint_least16_t));
    printf("Size of int_least32_t: %zu bytes\n", sizeof(int_least32_t));
    printf("Size of uint_least32_t: %zu bytes\n", sizeof(uint_least32_t));
    printf("Size of int_least64_t: %zu bytes\n", sizeof(int_least64_t));
    printf("Size of uint_least64_t: %zu bytes\n\n", sizeof(uint_least64_t));

    // Fastest-width integers
    printf("Size of int_fast8_t: %zu bytes\n", sizeof(int_fast8_t));
    printf("Size of uint_fast8_t: %zu bytes\n", sizeof(uint_fast8_t));
    printf("Size of int_fast16_t: %zu bytes\n", sizeof(int_fast16_t));
    printf("Size of uint_fast16_t: %zu bytes\n", sizeof(uint_fast16_t));
    printf("Size of int_fast32_t: %zu bytes\n", sizeof(int_fast32_t));
    printf("Size of uint_fast32_t: %zu bytes\n", sizeof(uint_fast32_t));
    printf("Size of int_fast64_t: %zu bytes\n", sizeof(int_fast64_t));
    printf("Size of uint_fast64_t: %zu bytes\n\n", sizeof(uint_fast64_t));

    // intptr_t and uintptr_t
    printf("Size of intptr_t: %zu bytes\n", sizeof(intptr_t));
    printf("Size of uintptr_t: %zu bytes\n", sizeof(uintptr_t));

    // Limits of cstdint types
    printf("INTMAX_MIN: %" PRIdMAX "\n", INTMAX_MIN);
    printf("INTMAX_MAX: %" PRIdMAX "\n", INTMAX_MAX);
    printf("UINTMAX_MAX: %" PRIuMAX "\n", UINTMAX_MAX);

    printf("INT8_MIN: %" PRId8 "\n", INT8_MIN);
    printf("INT8_MAX: %" PRId8 "\n", INT8_MAX);
    printf("UINT8_MAX: %" PRIu8 "\n", UINT8_MAX);

    // Similar printf statements for INT16, INT32, INT64, UINT16, UINT32, UINT64...

    printf("INT_LEAST8_MIN: %" PRIdLEAST8 "\n", INT_LEAST8_MIN);
    printf("INT_LEAST8_MAX: %" PRIdLEAST8 "\n", INT_LEAST8_MAX);
    printf("UINT_LEAST8_MAX: %" PRIuLEAST8 "\n", UINT_LEAST8_MAX);

    // Similar printf statements for INT_LEAST16, INT_LEAST32, INT_LEAST64,
    // UINT_LEAST16, UINT_LEAST32, UINT_LEAST64...

    printf("INT_FAST8_MIN: %" PRIdFAST8 "\n", INT_FAST8_MIN);
    printf("INT_FAST8_MAX: %" PRIdFAST8 "\n", INT_FAST8_MAX);
    printf("UINT_FAST8_MAX: %" PRIuFAST8 "\n", UINT_FAST8_MAX);

    // Similar printf statements for INT_FAST16, INT_FAST32, INT_FAST64,
    // UINT_FAST16, UINT_FAST32, UINT_FAST64...

    printf("INTPTR_MIN: %" PRIdPTR "\n", INTPTR_MIN);
    printf("INTPTR_MAX: %" PRIdPTR "\n", INTPTR_MAX);
    printf("UINTPTR_MAX: %" PRIuPTR "\n", UINTPTR_MAX);

    return 0;
}
/*
Notes:
The printf function uses format specifiers. In the case of %zu:
%: This is the format specifier escape character.
z: This is a length modifier; the corresponding argument is of type size_t.
u: This indicates that the argument is an unsigned decimal integer.

Size: Represent sizes, particularly the size of objects in bytes.
_t: The "t" at the end signifies type, emphasizing to define a specific data type.

Fast types offer performance:
- If performance is a critical concern and you need the fastest type with at least N bits
- As compilers may optimize performance differently based on the target architecture

Least types offer portability across different platforms/compilers:
- If you need a type with a specific width and don't want to risk the performance trade-offs
- If the differences in performance are negligible, prioritize code readability and maintainability.

PRIdMAX or PRIuMAX: 
- (Needs <cinttypes> to work, otherwise will get missing a ')' error)
- p: Is positional/parameterized format specifier
- R: This denotes that the argument is a "real" argument, not character type
- I: Integer argument.
- d: Is signed decimal integer
- u: unsigned decimal integer
*/