// #define is a preprocessor directive that defines a macro.
// The macro is defined as a sequence of characters that replaces the macro name in the code.
// Whwnever the macro name is encountered in the code, it is replaced by the sequence of characters defined in the macro.

// The syntax of #define is:
// #define macro_name replacement_text
// The replacement text can be a single value or a sequence of values.

// The #define directive does not require a semicolon at the end of the statement.

#include <stdio.h>
#define PI 3.14159 // defining a macro

int main() {
    float radius = 5;
    float area = PI * radius * radius;
    printf("Area of a circle = %f\n", area);
    return 0;
}