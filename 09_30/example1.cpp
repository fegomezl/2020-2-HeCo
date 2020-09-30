#include <iostream>
#include "factorial.h"

long main(long atgc, char **argv){

    int n = sdt::atoi(argv[1]);
    std::cout << "El factorial de " << n << " es " << factorial(n) << endl;
    return 0;
}
