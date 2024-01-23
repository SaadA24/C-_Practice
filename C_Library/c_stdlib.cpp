#include <cstdio>
#include <cstdlib>


// System environment variables
void cleanupFunction() 
{
    printf("cleanup function called on normal exit\n");
}
void quickExitFunction() 
{
    printf("Quick exit function called on quick exit\n");
}

int main () 
{
    // Conversion
    printf("ASCII to float %f\n", atof("3.14"));
    printf("ASCII to integer %d\n", atoi("123"));
    printf("ASCII to long: %ld\n", atol("456789"));
    printf("ASCII to long long %lld\n", atoll("9876543210"));

    //If it's NULL, you won't get information about the stopping point.
    //If endptr is not NULL, it will contain the pointer to the character that stopped the parsing. 
    printf("String to double: %f\n", strtod("2.718", NULL));
    printf("String to float: %f\n", strtof("5.5", NULL));
    printf("String to long %ld\n", strtol("12345", NULL, 10));
    printf("String to long double %Lf\n", strtold("1.234567890123456789", NULL));
    printf("String to long long %lld\n", strtoll("-987654321", NULL, 10));
    printf("String to unsigned long %lu\n", strtoul("4294967295", NULL, 10));
    printf("String to unsigned long long. %llu\n", strtoull("18446744073709551615", NULL, 10));

    //Random number:
    srand(time(NULL));
    for (int i = 0; i < 5; ++i) 
    {
    int random_number = rand();
    printf("Random number: %d\n", random_number);
    }

    //Normal exit: cleaning up resources, closing files, and calling functions are executed before the program terminates.
    //includes flushing buffered I/O streams, closing open files, and freeing allocated memory

    atexit(cleanupFunction);
    exit(0);

    //quick_exit faster termination without performing some of the cleanup tasks
    //skips flushing buffered I/O streams, closing files, and executing functions registered with atexit
    at_quick_exit(quickExitFunction);
    quick_exit(0);

    //Terminate immediately without executing any further code
    abort();



    return 0;
}

/*
Notes:
Remember, the following aren't related to c++ strings:
- malloc, calloc, realloc, free
- rand, srand - use <random> instead
- itoa (Integer to ASCII)
- ltoa (Long Integer to ASCII)
- lltoa (Long Long Integer to ASCII) - use std::to_string or std::stringstream for converting ints

printf("String to long %ld\n", strtol("12345", NULL, 10));
- Base 10: Decimal (0, 1, 2, ..., 9)
- Base 16: Hexadecimal (Memmory/Colours) (0, 1, 2, ..., 9, A, B, C, D, E, F)
- Base 8: Octal (Bitwise/File permissions) (0, 1, 2, ..., 7)
- Base 2: Binary (0, 1)

exit(0) and quick(0) - 0 means success

- Have to think about what/why you'd need to terminate a program for




*/