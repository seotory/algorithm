#include <stdio.h>
#include <string>
#include "../include/sort.h"

void quickSort (int value[], int start, int end) {
    int pivot = 0;
    if (start < end) {
        // 피봇의 위치를 구한다.
        pivot = partitionQuickSort(value, start, end);
        // 피봇의 위치를 기준으로 왼쪽 행렬을 다시 퀵소트
        quickSort(value, start, pivot - 1);
        // 피봇의 위치를 기준으로 오른쪽 행렬을 다시 퀵소트
        quickSort(value, pivot + 1, end);
    }
}

int partitionQuickSort(int value[], int start, int end) {
    // 필요한 상수 설정
    int pivot = end;
    int right = end;
    int left = start;
    int temp = 0;

    // 오른쪽의 인덱스가 왼쪽의 인덱스보다 클때까지 무한 반복
    while(left < right) {
        // 피봇이 왼쪽의 값보다 작거나 왼쪽과 오른쪽의 인덱스가 만나는 지점 전까지, 인덱스를 오른쪽으로 한칸씩 옮김
        while((value[left] < value[pivot]) && (left < right)) {
            left ++;
        }
        // 피봇이 왼쪽의 값보다 크거나 왼쪽과 오른쪽의 인덱스가 만나는 지점 전까지, 인덱스를 오른쪽으로 한칸씩 옮김
        while((value[right] >= value[pivot]) && (left < right)) {
            right --;
        }

        // 만약 왼쪽과 오른쪽의 인덱스가 만나는 지점 전이라면 두개의 값을 교환함
        if (left < right) {
            temp = value[left];
            value[left] = value[right];
            value[right] = temp;
        }
    }

    // 이 지점이 피봇을 중간으로 위치교환을 하고, 
    // 피봇 기점으로 배열을 두개를 만드는 곳이다.
    temp = value[pivot];
    value[pivot] = value[right];
    value[right] = temp;

    return right;
}