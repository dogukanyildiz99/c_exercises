#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i;

    printf("Please enter your name and your age\n");

    // use & for any variable except strings
    scanf("%s %d", str, &i);

    printf("\nYour name is %s and you are %d years old!\n", str, i);

    return 0;
}

/* EXPECTED OUTPUT
Please enter your name and your age
Dogukan
22

Your name is Dogukan and you are 22 years old!
*/
