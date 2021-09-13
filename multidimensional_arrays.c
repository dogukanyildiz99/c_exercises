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

  return 0;
}
