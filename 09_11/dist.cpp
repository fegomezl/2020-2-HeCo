#include <iostream>
#include <random>

using namespace std;

int main () {

    const int N = 100000;
    const int Nbins = 20;
    const int SEED = 1;
    const double Xmin = 0.0, Xmax = 1.0;
    const double DXhisto = (Xmax-Xmin)/Nbins;

    double histo[Nbins] = {0.0};
    
    mt19937 gen(SEED); //declarando el generador, 0 es la semilla
    uniform_real_distribution<double> dis(Xmin,Xmax); //retorna doubles, entre 0 y 1

    for(int i = 0; i <= N; i++){
        double r = dis(gen);
        int bin = int((r - Xmin)/DXhisto);
        histo[bin] += 1;
    }

    for(int i = 0; i < Nbins; i++){
        cout << Xmin + i*DXhisto << "\t" << histo[i] << endl;
    }

    return 0;

}
