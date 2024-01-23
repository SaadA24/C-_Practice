#include <iostream>
#include <cassert>

int main() {
    std::string helloWorld = "Hello World!";
    assert(helloWorld == "");
    return 0;
}

/*

Notes:
- returns: Assertion failed: expression, file filename, line line number
- Assertion failed: helloWorld == "", file assert.cpp, line 8

*/