#include<stdio.h>

// * is called Dereference Operator
// & is called Address-of Operator

int main () {
    int a = 10;
    int *p;
    p = &a;
    printf("Value of a: %d\n", a);  // value of a - what it contains
    printf("Address of a: %p\n", &a);   // address of a - where it is stored
    printf("Value of p: %p\n", p);    // address of a - where it is stored
    printf("Address of p: %p\n", &p);   // address of pointer - where it is stored
    printf("Value of *p: %d\n", *p);    // dereferencing - getting value from address
    return 0;
}
// The pointer is a variable that stores the address of another variable.
// The pointer is declared by using * operator.
// The pointer is initialized by using & operator.
// The pointer is dereferenced by using * operator.
// The pointer is used to access the value of the variable.
// The pointer is used to access the address of the variable.
// The pointer is used to access the address of the pointer.
// The pointer is used to access the value of the pointer.
// The pointer is used to access the value of the variable by dereferencing.
// The pointer is used to access the address of the variable by referencing.