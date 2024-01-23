#include <iostream>
#include <cstddef> //std def - standard definition

// Access NULL Type
#define NULL ((void *)0)

// takes the name of a structure type and the name of a member within that structure 
// returns the byte offset of that member from the beginning of the structure.
#define offsetof(type, member) ((size_t)(&((type *)0)->member))

// size t
typedef unsigned long size_t;

// Signed integer type that is used to represent the difference between two pointers. It is often used in pointer arithmetic.
typedef long ptrdiff_t;

/*
Notes:
- Can access these variable types in a c program with this header
- VS Code will show what the type is when you hover over it
*/