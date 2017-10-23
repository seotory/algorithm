#include <stdio.h>
#include <string>
#include "../include/utils.h"
#include "../include/basic.h"

using namespace std;

namespace basic {
    void question () {

        string question = "원하는 세부항목을 선택하세요.";
        string items[] = {"숫자로 비트연산"};
        int inputVal = askQuestion(question, items, 1);

        if ( inputVal == 1 ) {
            numberBit(1, 2);
        }
    }
}