//
// Created by Sigurd Pleym on 19/02/2025.
//
#include <iostream>
#include "MyLib.h"

int main() {
    float n1 = 10.0f, n2 = 20.0f;
    MyLib myLib;
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Multiplying:  " << n1 << " with " << n2 << "= " << myLib.multiply_numbers(n1, n2) << std::endl;
    return 0;
}
