#include<stdio.h>   //  < > symbol is used for system header files
#include "test.h"   // " " symbol is used for user-defined header files

int main(){
    printHello();
    printf("Sum of 2 and 3 is %d\n", add(2, 3));
    return 0;
}

// How to compile and run the program?
// To compile the program, you need to compile both the source file (test.c) and the main file (hello-world.c) together. You can do this using the following command:
// clang test.c hello-world.c -o hello-world