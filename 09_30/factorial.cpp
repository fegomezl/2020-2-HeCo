#include "factorial.h"

//función definición
long factorial(long n){
    if (n < 0) {
        std::cerr << "ERROR: Cannot compute factorial of negative number\n";
        return 0;
    }
    else {
    return n <= 1 ? n : n*factorial(n-1)
    }
        }
