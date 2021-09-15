#include <stdio.h>
#include <stdlib.h>
int main()
{
    //numbers from 1 to 10 inclusive with While Loop
    int n = 0;
    while (n < 10) {
        n++;
        printf("%d\n",n);
    }

    /*While loops can also execute infinitely if a condition
     is given which always evaluates as true (non-zero):
            while (1) {
            }
    */


    //The break directive halts a loop after ten loops, even though the while loop never finishes:
    int num = 0;
    while (1) {
        num++;
        if (num == 10) {
            break;
        }
    }

    /*In the following code, the continue directive causes the printf command to be skipped,
     so that only even numbers are printed out: */
    int number = 0;
    while (number < 10) {
        number++;

        /* check that n is odd */
        if (number % 2 == 1) {
            /* go back to the start of the while block */
            continue;
        }

        /* we reach this code only if n is even */
        printf("The number %d is even.\n", n);
    }

    return 0;
}
