#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum city {Istabul, Ankara, Izmir, Bursa, Antalya, Adana};
    enum city myCity;
    myCity = Adana;

    char myCharacter = 'D';
    char myEscapeChar = '\n';
    int myAge = 22;

    printf ("First letter of my name is %c %cMy age is %d", myCharacter, myEscapeChar, myAge);


    return 0;
}
