//
// Created by Sigurd Pleym on 19/02/2025.
//
#include <iostream>
#include "MySharedLib.h"

int main() {
    std::cout << "Hello cmakeWorld" << std::endl;

    float n1 = 10.0f, n2 = 20.0f;
    MySharedLib sharedLib;
    std::cout << "Adding:  " << n1 << " with " << n2 << "= " << sharedLib.addNumbers(n1, n2) << std::endl;

    return 0;
}
