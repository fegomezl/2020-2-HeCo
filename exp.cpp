#include <iostream>
#include <cstdlib>
using namespace std;

typedef float REAL;

//Cambia todo REAL en el codigo por float

REAL suma(REAL x, int Nmax);

int main(int argc, char *argv[]) {
  //argc guarda el numero de terminos en la linea ejecutada
  //argv[] guarda en cada elemento el termino correspondiente de la linea

  //cout.precision(7);
  //cout.setf(ios::scientific);

  REAL x=atoi(argv[1]);
  
  int N=atoi(argv[2]);

  REAL e_x=suma(x,N);

  cout<<"exp(x) = "<<e_x<<endl;
  
  return 0;

}

REAL suma(REAL x, int Nmax)
{
  REAL sum=0;
  REAL a_n=1;

  for(int i =0; i<Nmax;i++){
    sum=sum+a_n;
    a_n= a_n*x/(i+1);
  }
  return  sum;
}

  
