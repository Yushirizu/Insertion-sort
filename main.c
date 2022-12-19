#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[20] = {78,40,84,12,86,22,42,44,82,77,96,54,70,59,37,95,4,49,63,27};
    int indRef, test, indc,index;

    printf("DISPLAY OF THE TABLE OF 20 UNSORTED NUMBERS\n");

    for(index = 0; index<=19;index++){
        printf("Value  [%d] : %d\n",index,tab[index]);
    }

    /* the indRef cursor starts at the second value and is compared to the previous element
    indC is the position of the element that is compared with the test value*/

    /*As soon as the value is inserted in the array, we move to the next element.*/

    for(indRef=1;indRef<=19;indRef++){
        test = tab[indRef];
        indc = indRef;

    /*if the previous value is greater than the test value, move forward one space */
    /*And we finish when the indc reaches 0*/

    while(tab [indc-1] > test && indc != 0){
        tab [indc] = tab [indc-1];

    /* we continue the comparison with the other previous values*/

        indc --;
    }

    tab [indc] = test;

    }

    printf("DISPLAY OF THE SORTING TABLE\n");

    for(index = 0; index<=19;index++){
        printf("Value  [%d] : %d\n",index,tab[index]);
    }
}
