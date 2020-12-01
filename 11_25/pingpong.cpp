// Pingpong: pid 0 sends a counter to pid 1. Pid 1 increments it, and sends it back. pid 0 prints it
// NPINGPONG: Number of ping pong interchange

#include <iostream>
#include <numeric>
#include <cstdlib>
#include "mpi.h"

int main(int argc, char **argv)
{
  MPI_Init(&argc, &argv);
  const int NPINGPONG = std::atoi(argv[1]);
  int pid = 0, nproc = 0;

  MPI_Comm_rank(MPI_COMM_WORLD, &pid);
  MPI_Comm_size(MPI_COMM_WORLD, &nproc);

  int counter = 0;
  int tag = 0;

  if (pid == 0){
    for (int src = 1; src < nproc; src++){
      MPI_Send(&counter, 1, MPI_INT, src, tag, MPI_COMM_WORLD);
      
      MPI_Recv(&addition, 1, MPI_INT, src, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
      counter += addition;
    }
  } else {
    counter = 1;
  }

  if (pid == 0){
    std::cout << counter << "\n";
  }

  MPI_Finalize();
  return 0;
}

