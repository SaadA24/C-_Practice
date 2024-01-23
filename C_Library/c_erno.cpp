#include <iostream>
#include <cerrno> // global error value for functions
#include <stdio.h> // for file operations

int main() 
{
    FILE *file = fopen("non_existing_file.txt", "r");
    if (file == NULL) {
        // The fopen function sets the errno variable on failure
        perror("Error opening file");
        printf("Error code: %d\n", errno);
    } else {
        // File opened successfully, proceed with operations
        fclose(file);
    }
    return 0;
}

/*

Notes:

- Useful for following system error codes
- perror function is used to let developer know it is specific to error messages and makes it human readable.
- errno is platform dependent and defined by systems. 2 is always file not opened successfully.
- Can use fprintf for printfing formatted ouput to the file as well.

*/