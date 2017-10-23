#include <stdio.h>
#include <string>
#include <iostream>
#include "include/utils.h"
#include "include/basic.h"
#include "include/sort.h"

using namespace std;

int main () {

    string question = "원하는 항목을 선택하세요.";
    string items[] = {"c++", "정렬"};
    
    int inputVal = askQuestion(question, items, sizeof(items)/sizeof(items[0]));

    if (inputVal == 1) {
        basic::question();
    } else {
        sort::question();
    }

    return 0;
}
