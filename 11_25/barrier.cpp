#include <iostream>
#include <numeric>
#include <cstdlib>
#include "mpi.h"

int main(int argc, char **argv)
{
  MPI_Init(&argc, &argv);
  const int n = std::atoi(argv[1]);
  int pid = 0, nproc = 0;

  MPI_Comm_rank(MPI_COMM_WORLD, &pid);
  MPI_Comm_size(MPI_COMM_WORLD, &nproc);

  int tag = 0;

  for (int ii = 0; ii < nproc; ii++){
    if(pid == ii) std::cout << ii*n << "\n";
    MPI_Barrier(MPI_COMM_WORLD);
  }

  MPI_Finalize();
  return 0;
}

