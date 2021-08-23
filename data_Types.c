#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int myInt = 31;
    float myFloat = 31.31;
    double myDouble = 31.3131313131;
    short int myShortInt = 3;
    bool myBool = true;

    printf("Int:%d Float:%f\n", myInt, myFloat);
    printf("Double:%lf short int and bool:%d%d", myDouble,myShortInt, myBool);

    return 0;

    /* EXPECTED OUTPUT
    Int:31 Float:31.309999
    Double:31.313131 short int and bool:31
    */
}
