#include <iostream>
#include <climits>

int main () {
    std::cout << "Number of bits in a char: " << CHAR_BIT << " bits" << std::endl;

    std::cout << "Signed char min: " << static_cast<int>(SCHAR_MIN) <<  std::endl;
    std::cout << "Signed char max: " << static_cast<int>(SCHAR_MAX) << std::endl;

    std::cout << "Unsigned char max: " << static_cast<unsigned int>(UCHAR_MAX) << std::endl;

    std::cout << "min char: " << static_cast<int>(CHAR_MIN) << std::endl;
    std::cout << "max char: " << static_cast<int>(CHAR_MAX) << std::endl;

    std::cout << "Maximum bytes: " << MB_LEN_MAX << " bytes" << std::endl;

    std::cout << "short int min: " << SHRT_MIN << std::endl;
    std::cout << "short int max: " << SHRT_MAX << std::endl;

    std::cout << "unsigned(u) short(shrt) int max: " << static_cast<unsigned short>(USHRT_MAX) << std::endl;

    std::cout << "int min: " << INT_MIN << std::endl;
    std::cout << "int max: " << INT_MAX << std::endl;

    std::cout << "unsigned int max: " << static_cast<unsigned int>(UINT_MAX) << std::endl;

    std::cout << "long int min: " << LONG_MIN << std::endl;
    std::cout << "long int max: " << LONG_MAX << std::endl;

    std::cout << "unsigned long int max: " << static_cast<unsigned long>(ULONG_MAX) << std::endl;

    std::cout << "long long int min: " << LLONG_MIN << std::endl;
    std::cout << "long long int max: " << LLONG_MAX << std::endl;

    std::cout << "unsigned long long int max: " << ULLONG_MAX << std::endl;

    return 0;
}

/*
Notes:
- Constants with the limits of fundamental integral types for the specific system and compiler implementation used

- float.h was for fundamental floating point types

- static_cast used to ensure correct printing, especially for unsigned types

- Signed data types include both positive and negative numbers

- Unsigned data types only zero and positive values (hence larger sizes)

- The leftmost bit, also known as the most significant bit (MSB) (+ or -), is the sign bit

- Bit representation crucial for low-level when storage is tight

*/