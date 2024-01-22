#include <iostream>
#include <signal.h>

//Global flag to shut down application (volatile: can change. sig... istype of signal)
volatile sig_atomic_t shutdownFlag = 0;

void signalHandler(int signal)
{
    // Display signal called
    std::cout << "Signal received: " << signal << std::endl << "Inititiating shutdown" << std::endl;
    shutdownFlag = 1;

}
int main ()
{
    // Register the signal handler for SIGINT
    signal(SIGINT, signalHandler);

    std::cout << "Press Ctrl+C to initiate shutdown" << std::endl;

    while(!shutdownFlag){
        
        std::cout << "Programme running normally" << std::endl;

        // main program here:

    };

    // Perform cleanup or finalization before exiting
    std::cout << "Cleaning up and exiting." << std::endl;

    return 0;
}

/*
Notes: 
- To create custom signals or alerts to interupt the program in case if something goes wrong,
an error has occured or unwanted functionality

- sig_atomic_t declare variables that can be accessed atomically, read/written in a single uninterrupted operation
all while interupting the main program flow
- Used for signals specically

Flags:
SIGABRT	(Signal Abort) Uses abort function. Abnormal termination, such as is initiated by the abort function.
SIGFPE	(Signal Floating-Point Exception) Erroneous arithmetic operation, such as zero divide or an operation resulting in overflow
SIGILL	(Signal Illegal Instruction) Invalid function image, such as an illegal instruction. A corruption in the code or to an attempt to execute data.
SIGINT	(Signal Interrupt) Interactive attention signal. Generally generated by the application user.
SIGSEGV	(Signal Segmentation Violation) Invalid access to storage: When a program tries to read or write outside the memory it has allocated.
SIGTERM	(Signal Terminate) Termination request sent to program.
SIGKILL (Signal kill) Kills program without cleanup

Functions:
SIG_DFL	Default handling: The signal is handled by the default action for that particular signal.
SIG_IGN	Ignore Signal: The signal is ignored > ctrcl + c has no effect!
SIG_ERR	Special return value indicating failure.

*/