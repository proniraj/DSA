// #undef directive example
// The #undef directive is used to undefine a macro that was previously defined using the #define directive.
// The syntax of #undef is:
// #undef macro_name

#include <stdio.h>
#define PI 3.14159 // defining a macro

int main() {
    float radius = 5;
    float area = PI * radius * radius;
    printf("Area of a circle = %f\n", area);
    #undef PI // undefining the macro
    // printf("Value of PI = %f\n", PI); // error: 'PI' undeclared
    return 0;
}