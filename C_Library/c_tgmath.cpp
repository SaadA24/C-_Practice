#include <iostream>
#include <cmath>
#include <complex>
#include <ctgmath> // c type generic (ctg) math

int main() {
    // Using complex numbers
    std::complex<double> z(-4.0, 0.0); // -4 is real; 0 is imaginary

    // Square root of a complex number (including negative real part)
    std::complex<double> sqrtResult = std::sqrt(z);

    // Display the result
    double realPart = z.real();
    double imagPart = z.imag();

    std::cout << "Complex Number: " << realPart << " + " << imagPart << "i" << std::endl;
    std::cout << "Square root of " << z << " is: " << sqrtResult << std::endl;

    return 0;
}

/*
Notes:
- Allows overloads for complex numbers/calculations, sqrt, sin, cos. exp
- Makes working with complex numbers easier
*/