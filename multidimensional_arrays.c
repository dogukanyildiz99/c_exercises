#include <stdio.h>
#include <stdlib.h>

int main() {
  // three dimensional array
  int foo[1][2][3];

  // two dimensional array
  char vowels[1][5] = {
    {'a', 'e', 'i', 'o', 'u'}
    };

  /* array visualization
  5 columns 1 rows
     a e i o u
  */

  /*
   two dimensional arrays are the simplest
   form of the multidimensional arrays
   To declare a two-dimensional integer
   array of size [ x ][ y ],
   you would write: type arrayName [x][y];
  */

  /*
   a two-dimensional array can be considered
   as a table which will have [ x ] number
   of rows and [ y ] number of columns
   each element has an a[i][j] coordinate.
  */

  char vowels[][5] = {
    {'A', 'E', 'I', 'O', 'U'},
    {'a', 'e', 'i', 'o', 'u'}
    };
    /* array visualization
          A E I O U
          a e i o u
    */

    // 3 rows 4 columns
    int a[3][4] = {
    {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
    {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
    {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
    };
    /* this one is exactly the same as the initialization above
    int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    */
    /* to access a value inside a multidimensional array you 
    need to specify the location of the item by using a[x][y];
    */
    int val = a[2][3];
    
  return 0;
}
