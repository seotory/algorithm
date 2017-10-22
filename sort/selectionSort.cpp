#include <stdio.h>
// #include <iostream>

// 선택 정렬
// 1. 전체 배열을 한번씩 돌면서 가장 작은 숫자를 선택하고 치환한다.

void selectionSort (int values[], int count) {

    // init   11  5 30  1  6 20 16
    // step1   1  5 30 11  6 20 16      1과 11 변경
    // step2   1  5 30 11  6 20 16      5 변동없음
    // step3   1  5  6 11 30 20 16      30과 6 변경
    // step4   1  5  6 11 30 20 16      11 변동없음
    // step5   1  5  6 11 16 20 30      30과 16 변경
    // step6   1  5  6 11 16 20 30      20 변동없음

    int i=0, j=0, minValueIdx=0, temp=0;

    // 마지막에 남는 숫자는 가장 큰 숫자기 때문에 마지막까지 for문을 할 필요가 없다.
    for ( i=0 ; i<count-1 ; i++ ) {

        minValueIdx = i; // minValueIdx은 인덱스를 저장함
        
        for ( j=(i+1) ; j<count; j++ ) {
            if ( values[minValueIdx] > values[j] ) {
                minValueIdx = j;
            }
        }

        temp = values[i];
        values[i] = values[minValueIdx];
        values[minValueIdx] = temp;
        
    }

}