#include <iostream>
#include <random>

using namespace std;

int main () {

    cout.precision(6);

    const int S = 10;  //Semilla
    const int Xmin = 0; //limite minimo
    const int Xmax = 1; //limite maximo
    const int Nmax = 100; // Cantidad de números

    mt19937 gen(S); //declarando el generador, 0 es la semilla
    uniform_real_distribution<double> dis(Xmin,Xmax); //retorna doubles, entre 0 y 1

    for (int i = 1 ; i <= Nmax ; i++) {
        cout << dis(gen) << "\t" << dis(gen) << endl;
    }

    return 0;

}
