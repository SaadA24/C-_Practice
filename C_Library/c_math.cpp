#include  <iostream>
#include <math.h>

int main () 
{
    double x = 1.0;
    double a = 2.0;

    std::cout << "cos x: "<< cosh(x) << std::endl;
    std::cout << "sin x: "<< sin(x) << std::endl;
    std::cout << "tan x: "<< tan(x) << std::endl;
    std::cout << "arc cos x: "<< acos(x) << std::endl;
    std::cout << "arc sin x: "<< asin(x) << std::endl;
    std::cout << "arc tan x: "<< atan(x) << std::endl;
    std::cout << "arc tan2 x: "<< atan2(x, a) << std::endl;
    std::cout << "cosh x: "<< cosh(x) << std::endl;
    std::cout << "sinh x: "<< sinh(x) << std::endl;
    std::cout << "tanh x: "<< tanh(x) << std::endl;
    std::cout << "atanh x: "<< atanh(x) << std::endl;
    std::cout << "exp x: "<< exp(x) << std::endl;

    //frexp - get significand and exp
    double b = 16.0;
    int expVal;
    double significand = frexp(b, &expVal);
    std::cout << "frexp(16) - get significand and exp -" << " significand: " << significand << " exponent: " << expVal << std::endl;

    //ldexp - value from signifcand and exp
    std::cout << "ldexp - value from signifcand and exp = " << ldexp(1, 4) << std::endl;

    std::cout << "log(10): "<< log(10) << std::endl;
    std::cout << "log10(10): "<< log10(10) << std::endl;

    //modf - Break value into fractional and integral parts
    double value = 5.55;
    double integralPart;
    double fractionalPart = modf(value, &integralPart);
    std::cout << "modf(5.55) = Integral part: " << integralPart << ", Fractional part: " << fractionalPart << std::endl;

    //exp2 - Compute binary exponential function
    std::cout << "exp2 x: "<< exp2(x) << std::endl;

    //expm1 - exponential minus 1
    std::cout << "expm1 x: "<< expm1(x) << std::endl;

    // ilogb - int binary log
    std::cout << "ilogb: "<< ilogb(1024.0) << std::endl;

    //log1p - log plus 1
    std::cout << "log1p: "<< log1p(x) << std::endl;

    //logb - floating point base log
    std::cout << "log1p: "<< logb(x) << std::endl;

    // scalbn - Scale significand using floating-point base exponent
    std::cout << "scalbn: " << scalbn(0.75, 2) << std::endl;

    // scalbnl - Scale significand using floating-point base exponent (long)
    std::cout << "scalbn: " << scalblnl(0.75, 2) << std::endl;

    std::cout << "power: " << pow(2, 2) << std::endl;
    std::cout << "sqrt of 25: " << sqrt(25) << std::endl;
    std::cout << "cbrt of 64: " << cbrt(64) << std::endl;
    std::cout << "hypotenuse: " << hypot(3, 4) << std::endl;

    // erf - Error function - relationship between the normal distribution and the probability of a certain outcome.
    std::cout << "Error function: " << erf(1.5) << std::endl;

    // erfc - Complementary to error function 
    std::cout << "Complementary to error: " << erfc(1.5) << std::endl;

    // tgamma - generalization of the factorial function. For positive integers, tgamma(n) = (n-1)!
    std::cout << "generalization of the factorial function: " << tgamma(1.5) << std::endl;

    // lgamma - natural logarithm of the absolute value of the gamma function.
    std::cout << "natural logarithm of the absolute value of the gamma function: " << tgamma(1.5) << std::endl;

    std::cout << "round up: " << ceil(5.55) << std::endl;
    std::cout << "round down: " << floor(5.55) << std::endl;
    std::cout << "Remainder of division: " << fmod(6, 2) << std::endl;
    std::cout << "Truncate value: " << trunc(5.55) << std::endl;
    std::cout << "Round to nearest: " << round(5.49) << std::endl;
    std::cout << "Round to nearest int: " << rint(10.5) << std::endl;
    std::cout << "Round to nearby int: " << nearbyint(10.51) << std::endl;
    std::cout << "remainder (rounds then gives remainder): " << remainder(6, 2) << std::endl;

    int quotient;
    std::cout << "remainder and quotient: " << " remainder: " << remquo(6, 2, &quotient) << ", Quotient = " << quotient << std::endl;

    //copy sign
    std::cout << "copysign: " << copysign(-6, 2) << std::endl;

    //nan - Generate quiet NaN (space required)
    std::cout << "not a number: " << nan("") << std::endl;

    //nextafter - Returns the next representable value after x in the direction of y.
    std::cout << "nextafter: " << nextafter(3.75, 4) << std::endl;

    //nexttowards - Next representable value toward precise value
    std::cout << "nextafter: " << nexttoward(3.75, 4) << std::endl;
    
    //fdim - Positive difference
    std::cout << "positive difference: " << fdim(3.75, 2.5) << std::endl;

    //fmax - Max value
    std::cout << "max value float: " << fmax(3.75, 2.5) << std::endl;

    //fmin - Min value
    std::cout << "min value float: " << fmin(3.75, 2.5) << std::endl;

    //fabs - abs value float
    std::cout << "abs value float: " << fabs(-3.75) << std::endl;

    //abs - abs value
    std::cout << "abs value: " << abs(-3.75) << std::endl;

    //fma - floating multiple add
    std::cout << "floating multiple add: " << fma(-3.75, 2 ,2) << std::endl;

    // fpclassify - Classify floating-point value
    std::cout << "Classify floating-point value: " << std::fpclassify(x) << std::endl;

    // isfinite - not nan or inf
    std::cout << "isfinite ?: " << std::isfinite(x) << std::endl;

    // isinf - is infinity
    std::cout << "isfinity ?: " << std::isinf(INFINITY) << std::endl;

    //isnan - is not a number
    std::cout << "is nan ?: " << std::isnan(sqrt(-1)) << std::endl;

    //isnormal - is normally distributed
    std::cout << "is normal ?: " << std::isnormal(-1) << std::endl;

    //signbit - Returns whether the sign is negative
    std::cout << "sign ?: " << std::signbit(-1.0) << std::endl;

    //math_errhandling is a macro used similiarly to errno to handle/change specific erros when working with floats

    //HUGE_VAL - positive infinity encountered

    //HUGE_VALF - positive infinity encountered for floats

    //HUGE_VALL - Huge long double value infinity

    return 0;
}

/*
Notes:
- Can modify after each function for size of data type with l - long double, f - float
- Have to look out for inf and nan
- bn - base exponent
- fr - fractional
- Need to refer to math elements by reference to be accepted by function

- fpclassify - classifies the given floating-point value into the following categories:
> FP_NORMAL, FP_INFINITE, FP_NAN, FP_SUBNORMAL, or FP_ZERO.
- finite (not nan or inf)

- If you get a warning for any function, check the data type required by that function and match correct the value'
data type to match the function

Possible values math_errhandling can take.
- MATH_ERRNO
- MATH_ERREXCEPT

Which type fma is at least as efficient as x*y+z.
- FP_FAST_FMA
- FP_FAST_FMAF
- FP_FAST_FMAL	int	Each, if defined, identifies for which type fma is at least as efficient as x*y+z.

Int	Special values the ilogb function may return:
FP_ILOGB0
FP_ILOGBNAN

*/