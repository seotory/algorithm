#ifndef _SORT_H
#define _SORT_H

void selectionSort (int value[], int count);
void quickSort (int value[], int start, int end);
int partitionQuickSort(int value[], int start, int end);

namespace sort {
    void question ();
}

#endif