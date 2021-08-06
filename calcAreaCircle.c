#include <stdio.h>
#include <stdlib.h>

int main()
{
    float rad;
    float area;

    printf("Please enter radius of the circle to calculate area:");
    scanf(" %f", &rad);

    area = (rad*rad)*(3.14);

    printf("\nThe area of a circle that has %.2f radius is %.2f", rad, area);

    return 0;

    /* EXPECTED OUTPUT
    Please enter radius of the circle to calculate area:12

    The area of the circle that has 12.00 radius is 452.16
    */
}
