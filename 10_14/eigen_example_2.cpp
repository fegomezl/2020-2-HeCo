#include <iostream>
#include <eigen3/Eigen/Dense>
 
int main(int argc, char **argv)
{

   int N = std::atoi(argv[1]);
   
   Eigen::MatrixXd A(N,N);
   Eigen::VectorXd b(N);
   
   A = Eigen::MatrixXd::Random (N, N);
   b = Eigen::VectorXd::Random (N);
   
   std::cout << "Here is the matrix A:\n" << A << "\n";
   std::cout << "Here is the vector b:\n" << b << "\n";
   
   Eigen::VectorXd x(N);
   
   x = A.colPivHouseholderQr().solve(b);
   
   std::cout << "The solution is:\n" << x;
   
   return 0;
}
