#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf ("Number of arguments: %d\n", numberOfArguments);
    printf ("Argument 1 is the program name: %s\n", argument1);
    printf ("Argument 2 is the command line argument: %s\n", argument2);

    return 0;
}
/* Output
Number of arguments: 2
Argument 1 is the program name: C:\Users\doguk\OneDrive\Belgeler\School\C Programming\Exercises\exercise3\bin\Debug\exercise3.exe
Argument 2 is the command line argument: Dogukan
*/
