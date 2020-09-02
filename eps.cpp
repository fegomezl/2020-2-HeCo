#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
  //argc guarda el numero de terminos en la linea ejecutada
  //argv[] guarda en cada elemento el termino correspondiente de la linea

  cout.precision(7);
  cout.setf(ios::scientific);
  
  int N=atoi(argv[1]);

  float eps = 1.0;
  float one = 1.0;
  for (int i=0;i<N;i++){
    eps /=2;
    one = 1.0 + eps;
    cout<<i<<"\t"<<one<<"\t"<<eps<<endl<<"---------------------------------------"<<endl;
  }
    
  return 0;

}
