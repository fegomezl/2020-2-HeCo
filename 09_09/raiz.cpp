#include <iostream>
#include <cmath>

using namespace std;

typedef float real;

real fun1 (real x);
real fun2 (real x);

int main (){

    cout.precision(7);
    cout.setf(ios::scientific);

    real x = 0;
    double y = 0;
    real f1,f2;

    for (int i = 0 ; i < 100 ; i++){
        
    f1 = fun1(x);
    f2 = fun2(x);
    y+=1;
    x=y/100;
    cout <<x<<"\t"<<f1<<"\t"<<f2<<endl;

    }

    return 0;
}

real fun1 (real x){
    real f1 = 5.0 - sqrt(25.0 + x*x);
    return f1;
}

real fun2 (real x){
    real f2 = -(x*x)/(5.0 + sqrt(25.0 + x*x));
    return f2;
}



