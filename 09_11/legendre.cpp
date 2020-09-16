#include <iostream>
#include <cmath>
using namespace std;

typedef double real;

int main(){

    cout.precision(15);
    cout.setf(ios::scientific);
    
    const real XMIN = -1.0, XMAX = 1.0;
    const real DX = 0.01;
    const real N = 5;
    real x = 0;
    real f;

    for (real x = XMIN; x <= XMAX ; x += DX){
        f = legendre(N , x);
        cout << x << "\t" << f << endl;
    }

    return 0;

}
