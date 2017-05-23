//
//  main.cpp
//  Dynamic Array Test Demo Example
//
//  Created by ax on 3/19/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#include <iostream>

int main() {
    // insert code here...
    std::cout << "Dynamic Array Test Demo Example!\n";
    
    // an array container
    int * myDynamicArray = new int[10];
    
    // Populating array of 10, use array subscript
    for (int i = 0; i < 10; i++) {
        myDynamicArray[i] = i + 1;
    }
    
    std::cout << "Array Contents: \n";
    for (int i = 0; i < 10; i++) {
        std::cout << myDynamicArray[i] << " ";
    }
    std::cout << std::endl;
    
    
    // set up moving pointer
    int * movingPtr = myDynamicArray;
    
    for (int i = 0; i < 20; i++) {
        *movingPtr = i + 1;
        movingPtr++;
    }
    
    std::cout << "Array Contents: \n";
    for (int i = 0; i < 20; i++) {
        std::cout << myDynamicArray[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
