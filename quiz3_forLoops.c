#include <stdio.h>

int main() {
  int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int factorial = 1;
  int i;

    //calculate the factorial using a for loop  here
    for (i = 1; i < 11; i++){
        factorial *= i;
    }

  printf("10! is %d.\n", factorial);
}
