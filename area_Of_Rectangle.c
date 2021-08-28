#include <stdio.h>
#include <stdlib.h>

int main()
{
    double width;
    double height;
    double perimeter;
    double area;

    printf (" Please enter the width and the height of the rectangle\n");
    scanf (" %lf %lf", &width, &height);

    perimeter = (width + height)*2;
    area = width*height;

    printf (" Width: %.2lf\n Height: %.2lf\n Perimeter: %.2lf\n Area: %.2lf", width, height, perimeter, area);

    return 0;
}

/* Output
 Please enter the width and the height of the rectangle
12.5
23.4
 Width: 12.50
 Height: 23.40
 Perimeter: 71.80
 Area: 292.50
*/
