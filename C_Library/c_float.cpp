#include <iostream>
#include <float.h>

int main ()
{
    //maximum (MAX)
    std::cout << "Float maximum value: " << FLT_MAX << std::endl;
    std::cout << "Double maximum value: " << DBL_MAX << std::endl;
    std::cout << "long Double maximum value: " << LDBL_MAX << std::endl << std::endl;

    std::cout << "*****************************" << std::endl;

    //minimum (MIN)
    std::cout << "Float minumum value: " << FLT_MIN << std::endl;
    std::cout << "Double minumum value: " << DBL_MIN << std::endl;
    std::cout << "long double minimum value: " << LDBL_MIN << std::endl << std::endl;

    std::cout << "*****************************" << std::endl;

    //Digits (DIG) and Decimal digits (Decimal_digits). No LBDL decimal digits, just long double.
    std::cout << "Float digits: " << FLT_DIG << std::endl;
    std::cout << "Double digits: " << DBL_DIG << std::endl;
    std::cout << "Long double digits: " << LDBL_DIG << std::endl << std::endl;

    std::cout << "*****************************" << std::endl;

    std::cout << "Float decimal digits: " << FLT_DECIMAL_DIG << std::endl;
    std::cout << "Double decimal digits: " << DBL_DECIMAL_DIG << std::endl << std::endl;

    std::cout << "*****************************" << std::endl;

    //DIfference between 1 and smallest value greater than 1 (EPSILON)
    std::cout << "Float epsilon: " << FLT_EPSILON << std::endl;
    std::cout << "Double epsilon: " << DBL_EPSILON << std::endl;
    std::cout << "Long double epsilon: " << LDBL_EPSILON << std::endl << std::endl;

    std::cout << "*****************************" << std::endl;

    // Base of the exponent (RADIX)
    std::cout << "Float base: " << FLT_RADIX << std::endl << std::endl;

    std::cout << "*****************************" << std::endl;
 
    // value of floating-point = significand x base^exponent
    // The number of digits of precision, Significand or Mantisa (MANT_DIG)
    std::cout << "Float precision: " << FLT_MANT_DIG << std::endl;
    std::cout << "Double precision: " << DBL_MANT_DIG << std::endl;
    std::cout << "Long double precision: " << LDBL_MANT_DIG << std::endl << std::endl;

    std::cout << "*****************************" << std::endl;

    // Maximum that RADIX is raised to - 1 and is normalised ()
    std::cout << "Float maximum epsilon: " << FLT_MAX_EXP << std::endl;
    std::cout << "Double maximum epsilon: " << DBL_MAX_EXP << std::endl;
    std::cout << "long Double maximum epsilon: " << LDBL_MAX_EXP << std::endl << std::endl;

    // Minimum that RADIX is raised to - 1 and is normalised ()
    std::cout << "Float minimum epsilon: " << FLT_MIN_EXP << std::endl;
    std::cout << "Double minimum epsilon: " << DBL_MIN_EXP << std::endl;
    std::cout << "long Double minimum epsilon: " << LDBL_MIN_EXP << std::endl << std::endl;

    // others (tbc)

    return 0;
}   

/*
Notes:
- In c and c++, float.h contains the constants that represent the implementation-specific characteristics of the 
floating-point types in a particular system. It defines macros that specify the limits.

- These constants are helpful when dealing with numerical computations 
where knowledge of the precision and range of floating-point types is crucial.

For macros: 
    - FLT for float type
    - DBL to double 
    - LDBL to long double.
*/