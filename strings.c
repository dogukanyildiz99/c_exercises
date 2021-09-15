#include <stdio.h>
#include <stdlib.h>

int main()
{
    // we can define strings by using pointers
    char * name = "John Smith";

    /* This method creates a string which we can only use for reading.
    If we want to define a string which can be manipulated, we will need to
    define it as a local character array.*/
    char names[] = "John Smith";

    /*char name[] = "John Smith";
    is the same as
    char name[11] = "John Smith";*/

    /*The reason that we need to add one, although the string John Smith is
    exactly 10 characters long, is for the string termination: a special
    character (equal to 0) which indicates the end of the string. */

    //string formatting with printf
    int age = 27;

    /* prints out 'John Smith is 27 years old.' */
    printf("%s is %d years old.\n", name, age);

    //The function strlen returns the lenght of the string
    char * name2 = "Dogukan";
    printf("Length of the string 2 is: %d\n",strlen(name2));

    /*The function strncmp compares strings, returns 0 if they are equal
     or a different number if they are different.*/
    char * name3 = "John";

    if (strncmp(name3, "John", 4) == 0) {
        printf("Hello, John!\n");
    } else {
        printf("You are not John. Go away.\n");
    }

    //The function strncat concates two or more strings together.
    char dest[20]="Hello";
    char src[20]="World";
    strncat(dest,src,3);  // HelloWor
    printf("%s\n",dest);
    strncat(dest,src,20); // HelloWorld
    printf("%s\n",dest);

    return 0;
}
