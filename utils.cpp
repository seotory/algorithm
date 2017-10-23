#include <stdio.h>
#include <string>
#include <iostream>

void printArray (int values[], int count) {
    for ( int i=0 ; i<count ; i++ ) {
        printf("%d ", values[i]);
    }
    printf("\n");
}

int askQuestion (std::string q, std::string items[], int count) {
    std::cout << "Q. " << q << std::endl;
    
    int i;
    for (i=0 ; i<count ; i++) {
        std::cout << "  " << (i+1) << ". " << items[i] << std::endl;
    }

    int inputVal = 0;
    printf("> ");
    scanf("%d", &inputVal);
    printf("\n");
    return inputVal;
}