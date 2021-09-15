#include <stdio.h>
#include <stdlib.h>

int main()
{
    //For Loops supply the ability to create a loop - a code block that runs multiple times.
    int i;
    //For loops require an iterator variable, usually notated as i.
    for (i = 0; i < 10; i++){
        printf("%d\n",i);
    }
    /*if we would want to sum all the values of an array, we would use the iterator i
     as the array index:*/

    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        sum += array[i];
    }

    /* sum now contains a[0] + a[1] + ... + a[9] */
    printf("Sum of the array is %d\n", sum);

    return 0;
}
