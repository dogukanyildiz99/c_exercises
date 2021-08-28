#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integerVar = 72;
    float floatVar = 82.45;
    double doubleVar = 8.94e+31;
    char charVar = 'D';
    _Bool boolVar = 0;

    printf ("My Integer: %d\n", integerVar);
    printf ("My Float: %.2f\n", floatVar);
    printf ("My Double: %e\n", doubleVar);
    printf ("My Double: %g\n", doubleVar);
    printf ("My Char: %c\n", charVar);
    printf ("My Bool: %d\n", boolVar);

    return 0;
}

/* Output

My Integer: 72
My Float: 82.45
My Double: 8.940000e+031
My Double: 8.94e+031
My Char: D
My Bool: 0

*/
