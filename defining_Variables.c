#include <stdlib.h>
#include <stdio.h>

int main (){
  int a = 0, b = 1, c = 2, d = 3, e = 4;
  a = b - c + d * e;
  printf("%d", a); /* will print 1-2+3*4 = 11 */
  return 0;
}
