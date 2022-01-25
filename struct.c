#include <stdio.h>
#include <stdlib.h>

//Struct

typedef enum{
    man,
    woman,
    other
}sex;

typedef enum{
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday
}days;

typedef struct{
    int age;
    char *name;
    sex sx;
    days holiday;
}human;

int main(){
    int a = 10;
    human dogukan;
    dogukan.age = 22;
    dogukan.sx = man;
    dogukan.holiday = tuesday;

    printf("Age of Dogukan: %d \nSex of Dogukan: %u \nHoliday of Dogukan: %u", dogukan.age, dogukan.sx, dogukan.holiday);

    return 0;
}

/*
------------Output-------------
    Age of Dogukan: 22
    Sex of Dogukan: 0
    Holiday of Dogukan: 1
-------------------------------
*/
