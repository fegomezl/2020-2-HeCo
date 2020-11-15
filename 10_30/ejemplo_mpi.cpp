#include <iostream>
#include <mpi.h>

int main (int argc, char **argv) {

    MPI_Init(&argc, &argv);

    int rank, size; // rank: who am i?
    MPI_Comm_size(MPI_COMM_WORLD, &size); //Cuantos hay_
    MPI_Comm_rank(MPI_COMM_WORLD, &rank); //Quien soy

    std::cout << "Hello from process: " << rank
              << " out of " << size << "\n";

    MPI_Finalize();

    return 0;
}
