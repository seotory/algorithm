

void mergeSort(int value[], int buffer[], int start, int end) {
    int middle = 0;
    if (start < end) {
        middle = (start + end) / 2;
        mergeSort(value, buffer, start, middle);
        mergeSort(value, buffer, middle+1, end);
        mergeSortInternal(value, buffer, start, middle, end);
    }
}

