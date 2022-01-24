#include <stdio.h>
#include <stdlib.h>

//Program that places the first 20 fibonacci numbers to an array

int main()
{
    int arr[20];
    int temp;
    arr[0] = 1;
    arr[1] = 1;
    for(int i = 2; i < 20; i++)
    {
        arr[i] = arr[i-1]+arr[i-2];
    }
    for(int j = 0; j < 19; j++)
    {
       printf("%d, ",arr[j]);
    }
    printf("%d",arr[19]);

    return 0;
}
