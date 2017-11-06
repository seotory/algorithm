#ifndef _UTILS_H
#define _UTILS_H

#include <string>
#include <iostream>

void printArray (int values[], int count);
int askQuestion (std::string q, std::string items[], int count);

// cpp typename 을 이용해서 size 구하기
template < typename T >
int size(const T (&X)) 
{
    // *&X;
    // std::cout << *&X << std::endl;
    // std::cout << sizeof(X) << std::endl;
    int value = (sizeof(X)/sizeof(X[0]));
    return value;
}

#endif