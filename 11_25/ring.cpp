#include <iostream>
#include <numeric>
#include <cstdlib>
#include "mpi.h"

int main(int argc, char **argv)
{
  MPI_Init(&argc, &argv);
  const int cycles = std::atoi(argv[1]);
  int pid = 0, nproc = 0;

  MPI_Comm_rank(MPI_COMM_WORLD, &pid);
  MPI_Comm_size(MPI_COMM_WORLD, &nproc);

  int counter = 0;
  int tag = 0;

  int src = (pid - 1)%nproc;
  int dest = (pid + 1)%nproc;

  for (int ii = 0; ii < cycles; ii++){
    if (pid == 0){
      MPI_Send(&counter, 1, MPI_INT, dest, tag, MPI_COMM_WORLD);
      MPI_Recv(&counter, 1, MPI_INT, src, tag, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
    } else {
      MPI_Recv(&counter, 1, MPI_INT, src, tag, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
      counter += pid;
      MPI_Send(&counter, 1, MPI_INT, dest, tag, MPI_COMM_WORLD);
    }
  }

  if (pid == 0){
    std::cout << counter << "\n";
  }
  

  MPI_Finalize();
  return 0;
}

