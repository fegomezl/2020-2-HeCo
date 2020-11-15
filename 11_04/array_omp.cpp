#include <iostream>
#include <cstdlib>
#include <cmath>
#include <chrono>
#include <omp.h>

int main (int argc, char **argv)
{
    const int N = std::atoi(argv[1]);
    double * data = new double [N];

    auto start = std::chrono::steady_clock::now();
    
#pragma omp parallel
    {
        int nth = omp_get_num_threads();
        int tid = omp_get_thread_num();
        int SL = N/nth;
        
        //fill the array
        for (int ii = tid*SL; ii < tid*SL + SL; ii++){
            data[ii] = 2*std::sin(ii) + std::log(ii + 1);
        }
    }

    //print
    auto end = std::chrono::steady_clock::now();
    double time = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();
    
    std::cout << "Elapsed time in ms: " << time << "\n"
              << data[N/2] << std::endl;
    
    delete [] data;
    return 0;

}
