#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int tamano, i;
    double a, b, dx;

    cout << "Ingrese el limite inferior a: "; cin >> a;

    cout << "Ingrese el limite superior b: "; cin >> b;

    cout<< "Ingrese el numero de intervalos n: ";   cin>> tamano;

    double area[tamano], y[tamano], x[tamano], integral=0;

    dx = (b-a)/tamano;
    
    for(i=0; i < tamano; i++){

        x[i] = a + (i * dx) + dx/2;
        y[i] = sin(x[i]) + cos(x[i]);
        area[i] = y[i] * dx;
        integral = integral + area[i];
    }

    cout << "El valor de la integral es aproximadamente igual a: " << integral;


    return 0;
}