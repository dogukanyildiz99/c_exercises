#include <stdio.h>
#include <stdlib.h>

//Pointer

int main()
{
    // declaring pointers
    int *p;
    int *d;
    // pointer that points to an another pointer
    int **q;
    // some integers
    int a = 10;
    int b = 20;
    // pointers refers to these addresses
    p = &a;
    d = &b;
    q = &p;
    // the values that stored in the addresses that pointers referred
    printf("%d %d %d\n", *p, *d, **q);
    // the addresses that pointers stored
    printf("%d %d %d\n", p, d, q);
    // the addresses of the pointers itselves
    printf("%d %d %d", &p, &d, &q);

    return 0;
}

/*
------------Output-------------
    10 20 10
    6422020 6422016 6422040
    6422040 6422032 6422024
-------------------------------
*/
