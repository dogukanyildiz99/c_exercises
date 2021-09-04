/*
Arrays are special variables which can hold more than one value under the same variable name, organised with an index. 
Arrays are defined using a very straightforward syntax:
*/

/* defines an array of 10 integers */
#include <stdio.h>
#include <stdlib.h>

int main(){
  int numbers[10];
  
  /* populate the array */
  numbers[0] = 10;
  numbers[1] = 20;
  numbers[2] = 30;
  numbers[3] = 40;
  numbers[4] = 50;
  numbers[5] = 60;
  numbers[6] = 70;
  
  /* print the 7th number from the array, which has an index of 6 */
  printf("The 7th number in the array is %d", numbers[6]);
  
  return 0;
}
