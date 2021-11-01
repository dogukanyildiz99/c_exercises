#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list[] = {4, 8, 15, 16, 23, 42};
    selectionSort(list, 6);
    return 0;
}

/* ================== selectionSort ===================
Sorts list [1…last] by selecting smallest element in
unsorted portion of array and exchanging it with
element at beginning of the unsorted list.
 Pre list must contain at least one item
 last contains index to last list element
 Post list has been sorted smallest to largest
*/
void selectionSort (int list[ ], int last)
{
    // Local Declarations
    int smallest;
    int holdData;
    // Statements
    for (int current = 0; current < last; current++)
    {
        smallest = current;
        for (int walker = current + 1; walker <= last; walker++)
        {
            if (list[ walker ] < list[ smallest ])
            {
                smallest = walker;
                // Smallest selected: exchange with current
                holdData = list[ current ];
                list[current] = list[ smallest ];
                list[smallest] = holdData;
            }
        }
     } // for current
    return;
} // selectionSort
