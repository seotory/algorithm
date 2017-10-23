#include <stdio.h>
#include <iostream>
#include <bitset>
#include <climits>

void numberBit (int a, int b) {
    int result=0;

    // 비트합 (A|B)
    result = a|b;
    printf("a: %d, b: %d, result: %d\n", a, b, result);
    
    std::cout << "     a bit: " << std::bitset<8>(a) << std::endl;
    std::cout << "     b bit: " << std::bitset<8>(b) << std::endl;
    std::cout << "result bit: " << std::bitset<8>(result) << std::endl;

    // 비트곱 (A&B)
}