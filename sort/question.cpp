#include <stdio.h>
#include <string>
#include "../include/utils.h"
#include "../include/sort.h"

using namespace std;

void selectionSortRun ();

namespace sort {
    void question () {

        string question = "원하는 세부항목을 선택하세요.";
        string items[] = {"선택정렬"};
        int inputVal = askQuestion(question, items, size(items));

        if ( inputVal == 1 ) {
            selectionSortRun();
        }
    }
}

void selectionSortRun () {
    int values[] = {11,32,34,4,5};
    
    printArray(values, 5);
    // 선택정렬
    selectionSort(values, 5);

    printArray(values, 5);
}