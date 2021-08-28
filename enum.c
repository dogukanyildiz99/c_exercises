#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum company Company1;
    enum company Company2;
    enum company Company3;
    Company1 = XEROX;
    Company2 = GOOGLE;
    Company3 = EBAY;

    printf("Company 1 location is %d\n", Company1);
    printf("Company 2 location is %d\n", Company2);
    printf("Company 3 location is %d\n", Company3);

    return 0;
}
/* Output
Company 1 location is 2
Company 2 location is 0
Company 3 location is 4
*/
