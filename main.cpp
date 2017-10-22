#include <stdio.h>
#include "sort/selectionSort.h"

void printArray (int values[], int count);

int main () {
    int values[] = {11,32,34,4,5};

    printArray(values, 5);
    
    // 선택정렬
    selectionSort(values, 5);

    printArray(values, 5);

    return 0;
}

void printArray (int values[], int count) {
    for ( int i=0 ; i<count ; i++ ) {
        printf("%d ", values[i]);
    }
    printf("\n");
}