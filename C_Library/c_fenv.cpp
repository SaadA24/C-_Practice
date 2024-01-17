#include <iostream>
#include <fenv.h>
#include <math.h>
#pragma STDC FENV_ACCESS on // If set to on, the program can access the floating-point environment to test exceptions or run compiler control modes

int main ()
{
    // declare environment
    fenv_t mod_env;

    // get environment
    fegetenv(&mod_env);

    // display current env and clear all existing exceptions
    printf("Current Floating-Point Environment:\n");

    // floating-point operation that should give error
    double result = sqrt(-1.0);
    if (isnan(result)) {printf("sqrt(-1) results in NaN\n");}

    // The system does not raise an exception for sqrt, instead it sees nan. So will try another type of error
    double result2 = 5.0/0.0;

    // check for exceptions after
    if(fetestexcept(FE_DIVBYZERO)) printf("floating point environment exception: result2 - divbyzero"); // floating point environment (fe)-test-except

    return 0;
}

/*
Notes:
- Header file used to modify how compiler raises exceptions for floating point environment (FE) errors and deals with rounding directions.
- Useful if you want all Floats to be treated in a very specific way.

- System dependent, so check deeper compiler settings for types of exceptions raised maybe using:
    - g++ -E -dM - < /dev/null
    - g++ -v -o test_program c_fenv.cpp

Macro value	descriptions:
FE_ALL_EXCEPT - All exceptions (selects all of the exceptions supported by the implementation).
FE_DIVBYZERO - Pole error: division by zero, or some other asymptotically infinite result (from finite arguments).
FE_INEXACT - Inexact: the result is not exact.
FE_INVALID - Domain error: At least one of the arguments is a value for which the function is not defined.
FE_OVERFLOW - Overflow range error: The result is too large in magnitude to be represented as a value of the return type.
FE_UNDERFLOW - Underflow range error: The result is too small in magnitude to be represented as a value of the return type.

*/