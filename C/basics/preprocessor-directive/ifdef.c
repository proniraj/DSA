// #ifdef is a preprocessor directive that allows you to check if a macro is defined or not. If the macro is defined, the code between #ifdef and #endif will be included in the final code. If the macro is not defined, the code will be excluded.

// The syntax of #ifdef is:
// #ifdef macro_name
// code
// #endif
// The code between #ifdef and #endif will be included in the final code only if the macro_name is defined using the #define directive.

// The #ifdef directive does not require a semicolon at the end of the statement.

#include <stdio.h>
#define PI 3.14159 // defining a macro

int main() {
    float radius = 5;
    float area = PI * radius * radius;
    printf("Area of a circle = %f\n", area);
    #ifdef PI
    printf("Value of PI = %f\n", PI);
    #endif

    #undef PI // undefining the macro
    #ifdef PI
    printf("Value of PI = %f\n", PI);   // This line will not be included in the final code
    #endif

    return 0;
}