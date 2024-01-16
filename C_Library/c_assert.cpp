#include <iostream>
#include <assert.h>

// Assertion failed: expression, file filename, line line number
// Assertion failed: helloWorld == "", file assert.cpp, line 8

int main() {
    std::string helloWorld = "Hello World!";
    assert(helloWorld == "");
    return 0;
}