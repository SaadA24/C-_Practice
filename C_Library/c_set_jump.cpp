#include <iostream>
#include <csetjmp>

// Hold information to restore calling environment)
jmp_buf jumpBuffer;

void process1() 
{
    std::cout << "Process1 started" << std::endl;

    //setjmp defines state. If it's not 0, longjmp will be called. 
    if(setjmp(jumpBuffer) != 0)
    {
        std::cout << "process1 after longjmp" << std::endl;
        return;
    }
    std::cout << "process 1 jumping to process2" << std::endl;
    longjmp(jumpBuffer, 1); // Jump to the point saved by setjmp
}

void process2 () 
{
    std::cout << "Process2 started" << std::endl;
    std::cout << "Process2 jumping back to process1" << std::endl;
    longjmp(jumpBuffer, 1); // Jump to the point saved by setjmp
}


int main ()
{
    std::cout << "Starting main" << std::endl;

    process1();
    process2();

    return 0;
}

/*
Notes: 
- Output:
Starting main
Process1 started
process1 jumping to process2 (because jumpbuffer is 0)
process1 after longjmp (because after going to process 2, it's not 0)
Process2 started
Process2 jumping back to process1
process1 after longjmp

- Overall: Very error prone and hard to utilise so not recommended
- Also would be very hard to debug in large progammes
- Better to use proper control flow mechanisms

*/