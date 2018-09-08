# Lab0 Introduction to C and Git
This simple single-op calculator is more or less designed to teach about using Git and a basic understanding of C. 

## Operation
This program (math) is designed to be called by another function and run on the microcontroller. It will be interfaced through UART.
### Compilation
To compile the program and test its operation, execute the following code in your favorite terminal program.
```sh
gcc -o main ./main.c ./math.c && ./main
```
This will both compile and execute the code.

## Parameters
The main function being tested in this program, math, has three parameters (int, int, char) with a return type of int. It should be noted that ints on the MSP430 are 16 bit compared to 32 bits on x86-based systems. 

## Additional Notes
I do have a working USART calculator I made for my AVR-Xplained microcontroller already completed. It won't run on a launchpad, but I have this code due to a very boring plane ride from Newark to San Francisco. Over UART, it takes two char arrays of 0-9 (up to 2^32-1 unsigned) and an operation, and returns a character array representing the result (unsigned). If anyone wishes to see the code, with permission from Russel, I'll share it.

73
