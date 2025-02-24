//
// Created by Sigurd Pleym on 19/02/2025.
//
#include <iostream>
#include "MyInstallLib.h"
#include "version.h"

int main() {
    std::cout << "Hello cmakeWorld" << std::endl;
    std::cout << "Version: " << MyApp_VERSION_MAJOR << "." << MyApp_VERSION_MINOR << std::endl;

    float n1 = 10.0f, n2 = 20.0f;
    MyInstallLib myLib;

    std::cout << "Multiplying:  " << n1 << " with " << n2 << "= " << myLib.multiply_numbers(n1, n2) << std::endl;


    return 0;
}
