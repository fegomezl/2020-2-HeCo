#include <iostream>
#include "factorial.h"

int main(int argc, char **argv){

    if (factorial(0) != 1) {
        std::cerr << "ERROR: factorial(0) != 1\n";
    }
    else if (factorial(1) != 1) {
        std::cerr << "ERROR: factorial(1) != 1\n";
    }
    else if (factorial(2) != 2) {
        std::cerr << "ERROR: factorial(0) != 2\n";
    }
    else if (factorial(10) != 3628800) {
        std::cerr << "ERROR: factorial(0) != 3628800\n";
    }
    else {
    std::cout << "ALL TEST PASSED";
    }

    return 0;
}
