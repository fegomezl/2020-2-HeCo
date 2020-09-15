#include <iostream>
#include <cmath>

using namespace std;

typedef float real;

real sumup (int N);
real sumdown (int N);

int main(void){

    real p;
    
    for (int N = 1; N <= 100; ++N){
        p = fabs(1 - sumdown(N)/sumup(N));
        cout << N << "\t" << p << endl;
    }
    
    return 0;
}

real sumup (int N){

    real suma = 0.0;
    for (int i = 1; i <= N; ++i) {
        suma += 1.0/i;
    }
    return suma;
}

real sumdown (int N){

    real suma = 0.0;
    for (int i = N; i >= 1; --i) {
        suma += 1.0/i;
    }
    return suma;
}



