// BEWARE THAT THIS CODE DOES NOT COMPILE
#include <stdio.h>

int main() {
    /*
    Functions receive either a fixed or variable amount of arguments.
    Functions can only return one value, or return no value.
    */

    //Functions are defined using the following syntax:
    int foo(int bar) {
        /* do something */
        return bar * 2;
    }

    int main() {
        foo(1);
    }
    /*The function foo we defined receives one argument, which is bar.
    The function receives an integer, multiplies it by two, and returns the result.*/

    /*In C, functions must be first defined before they are used in the code.
    They can be either declared first and then implemented later on using a header file
    or in the beginning of the C file, or they can be implemented in the order they are used (less preferable).*/

    //The correct way to use functions is as follows:

    /* function declaration */
    int foo(int bar);

    int main() {
        /* calling foo from main */
        printf("The value of foo is %d", foo(1));
    }

    int foo(int bar) {
        return bar + 1;
    }

    //We can also create functions that do not return a value by using the keyword void:

    void moo() {
        /* do something and don't return a value */
    }

    int main() {
        moo();
    }

    return 0;
}
