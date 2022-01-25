#include <stdio.h>
#include <stdlib.h>

//Pointer

int main()
{
    // declaring pointers
    int *p;
    int *d;
    // some integers
    int a = 10;
    int b = 20;
    // pointers refers to these addresses
    p = &a;
    d = &b;
    // the values that stored in the addresses that pointers referred
    printf("%d %d\n", *p, *d);
    // the addresses that pointers stored
    printf("%d %d\n", p, d);
    // the addresses of the pointers itselves
    printf("%d %d", &p, &d);

    return 0;
}

/*
------Output-------
    10 20
    6422028 6422024
    6422040 6422032
-------------------
*/
