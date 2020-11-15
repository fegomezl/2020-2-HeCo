#include <iostream>
#include <omp.h>

int main (int argc, char **argv){

    double x = 25;

#pragma omp parallel
    {
        int tid = omp_get_thread_num();
        int nth = omp_get_num_threads();
        std::cout << "Hello world, from tid: " << tid << "\n"
                  << "My nth: " << nth << "\n";
        std::cout << "&tid: " << &tid << "\n";
    }
    return 0;
}
