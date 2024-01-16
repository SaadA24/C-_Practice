#include <iostream>
#include <assert.h>

// Assertion failed: expression, file filename, line line number

int main() {
    std::string helloWorld = "Hello World!";
    assert(helloWorld == "");
    return 0;
}