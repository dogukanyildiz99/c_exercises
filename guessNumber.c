#include <stdio.h>
#include <stdlib.h>

void guessNumber(int guess) {
    if (guess < 555){
        printf("Your guess is too low.\n");
    } else if (guess > 555){
        printf("Your guess is too high.\n");
    } else {
        printf("Correct. You guessed it\n");
    }
}

int main() {
    int guessNumb;
    for(int i = 0; i < 3; i++){
        printf("Please guess a number between 0 and 1000!\n");
        scanf("%d",&guessNumb);
        guessNumber(guessNumb);
    }

}
