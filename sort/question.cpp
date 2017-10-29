#include <stdio.h>
#include <string>
#include "../include/utils.h"
#include "../include/sort.h"

using namespace std;

namespace sort {
    void question () {

        string question = "원하는 세부항목을 선택하세요.";
        string items[] = {"선택정렬", "퀵정렬"};
        int inputVal = askQuestion(question, items, 2);

        if ( inputVal == 1 ) {
            int values[] = {11, 32, 34, 4, 5};
            printArray(values, 5);
            // 선택정렬
            selectionSort(values, 5);
            printArray(values, 5);

        } else if ( inputVal == 2 ) {
            int value[] = {20, 3, 199, 22, 21, 19, 2, 122};
            quickSort(value, 0, 7);
            printArray(value, 8);
        }
    }
}