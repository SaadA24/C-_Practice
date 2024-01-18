#include <inttypes.h> // width-based integral types
#include <iostream>
#include <stdio.h>

int main () 
{
    int8_t int8_variable = 24;
    int64_t int64_variable = 123456;

    //PRIi8: printf format
    
    printf("int8: %" PRIi8 "\n", int8_variable);

    //PRIiFAST64: Fastest integer type with a width of at least 64 bits. 
    //It may be wider than 64 bits for performance reasons

    printf("Fast int64: %" PRIiFAST64 "\n", int64_variable);

    //PRIiLEAST64: Smallest integer type with a width of at least 64 bits. 
    //It is chosen to be at least as wide as int64_t, but it may be wider for better performance on certain platforms.

    printf("At Least int64: %" PRIiLEAST64 "\n", int64_variable);

    //SCNdFAST64: Scanf format  
    int_fast64_t userInput;
    printf("Enter a 64bit integer: ");

    //Need to include % sign here before to format
    scanf("%" SCNdFAST64, &userInput);
    printf("You entered: " "%" PRIdFAST64 "\n", userInput);

    return 0;
}

/*
Notes: Opimising both printf and scanf

- Always needs a format specifier for printing and % sign in quotation

- Library helps in writing code that is portable across different platforms

- Useful when you know you're working with fixed-width integer types

- Makes both functions and printf occupy less space, so better optimisation

- scanf from c is apparently much faster than std::cin when iostream I/O functions maintain 
synchronization with the Compiler I/O functions

- switching it off using std::ios::sync_with_stdio(false) makes std::cin faster
- Source: https://stackoverflow.com/questions/1042110/using-scanf-in-c-programs-is-faster-than-using-cin

*/