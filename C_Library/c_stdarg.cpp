#include <iostream>
#include <cstdarg>

int sum(int count, ...)
{
    va_list arguments; // Traverse arguments
    va_start(arguments, count); //Initialize args to point to the first unnamed argument

int total = 0;

for(int i = 0; i < count; i++)
{
    int nextArgument = va_arg(arguments, int); //next argument of int type
    total += nextArgument;
}

va_end(arguments); // clean up the va list

return total;
}

int main() {
    int result1 = sum(3, 1, 2, 3);
    int result2 = sum(5, 10, 20, 30, 40, 50);

    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;

    return 0;
}

/*
Notes:
- Main use cases are for printf and scanf so they can take various arguments to format the input/output
- Useful for handling different numbers and types of arguments in a flexible way
- Remember variable functions can be error prone and function doesn't state how many arguments
*/