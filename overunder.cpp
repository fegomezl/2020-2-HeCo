#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
  //argc guarda el numero de terminos en la linea ejecutada
  //argv[] guarda en cada elemento el termino correspondiente de la linea
  double under=1.0;
  double over=1.0;
  int N=atoi(argv[1]);

  for(int i=0;i<N;i++){
    under /= 2.0;
    over *= 2.0;
    cout <<i<<endl<<under<<endl<<over<<endl<<"-------------"<<endl;
  }
    
  return 0;

}
