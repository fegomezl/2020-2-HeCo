#include <iostream>
#include <vectors>

/*
El programa simulara un cuerpo cayendo bajo la acciön de la gravedad,
que en el futuro rebotara con el piso y otros cuerpos.
*/

// cuerpo
struct body {
    double masa;
    double r[3], v[3], f[3];
};

// simulation conditions
const int N = 1;
const double G = 9.81;

void initial_conditions (std::vector<body> & bodies);
void timestep (std::vector<body> & bodies, double dt);
void start_timeintegration (std::vector<body> & bodies, double dt);
void compute_force (std::vector<body> & bodies);
void print_system (const std::vector<body> & bodies, double time);


/*
 Cuerpo:
 - masa (densidad)
 - (forma: esfera)
 - r[3], v[3], F[3]

 Condiciones externas
 - Gravedad

 Funciones
 -initial conditions


 - timestep (nueva posicion y nueva velocidad)
 - start_timeintegration()
 - compute_force(){
   - (implementar la fuerza de Hertz)
   - (Fuerza del rebote)
   - (Fuerza de la gravedad) 
   - (Amortiguamiento)
   - (Fuerxa de friccion, si es que se considera)
   }
 - print_system

 - Visialization

 */


int main (){

    return 0;

}
