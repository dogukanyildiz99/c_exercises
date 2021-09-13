#include <stdio.h>
#include <stdlib.h>

int main()
{
    int target = 10;
    /*
    The if statement allows us to check if an expression is
    true or false, and execute different code according to the result.
    */
    if (target == 10) {
    printf("Target is equal to 10");
  }

    int foo = 1;
    int bar = 2;

    // checking the conditions
    if (foo < bar) {
    printf("foo is smaller than bar.");
    }

    if (foo > bar) {
    printf("foo is greater than bar.");
    }

    /*
    We can use the else keyword to execute code when our expression evaluates to false.
    */
    int foo = 1;
    int bar = 2;

    if (foo < bar) {
        printf("foo is smaller than bar.");
    } else {
        printf("foo is greater than bar.");
    }

    /*
    Sometimes we will have more than two outcomes to choose from.
    In these cases, we can "chain" multiple if else statements together.
    */
    int foo = 1;
    int bar = 2;

    if (foo < bar) {
        printf("foo is smaller than bar.");
    } else if (foo == bar) {
        printf("foo is equal to bar.");
    } else {
        printf("foo is greater than bar.");
    }

    //You can also nest if else statements if you like.
    int peanuts_eaten = 22;
    int peanuts_in_jar = 100;
    int max_peanut_limit = 50;

    if (peanuts_in_jar > 80) {
        if (peanuts_eaten < max_peanut_limit) {
            printf("Take as many peanuts as you want!\n");
        }
    } else {
        if (peanuts_eaten > peanuts_in_jar) {
            printf("You can't have anymore peanuts!\n");
        }
        else {
            printf("Alright, just one more peanut.\n");
        }
    }

    /*
    To check if two expressions both evaluate to true, use the AND operator &&.
    To check if at least one of the expressions evaluate to true, use the OR operator ||.
    */
    int foo = 1;
    int bar = 2;
    int moo = 3;

    if (foo < bar && moo > bar) {
        printf("foo is smaller than bar AND moo is larger than bar.");
    }

    if (foo < bar || moo > bar) {
        printf("foo is smaller than bar OR moo is larger than bar.");
    }

    //The NOT operator ! can also be used likewise:
    int target = 9;
    if (target != 10) {
        printf("Target is not equal to 10");
    }

    return 0;
}

