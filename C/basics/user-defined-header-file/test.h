// Custom demo header file for c program.

#ifndef TEST_H  // If TEST_H is not defined
#define TEST_H  // Define TEST_H

// Function declaration
extern void printHello();

extern int add(int a, int b);

#endif

// The above code is a simple header file that contains a function declaration. The function printHello() is declared in this header file.
// The #ifndef directive is used to check if the TEST_H macro is not defined. If it is not defined, the code inside the #ifndef block is executed, and the TEST_H macro is defined using the #define directive.
// The #endif directive marks the end of the conditional compilation block.

// where does function definition go?
// The function definition goes in the source file (test.c) that includes the header file (test.h). Here is the implementation of the printHello() function in the test.c file:

