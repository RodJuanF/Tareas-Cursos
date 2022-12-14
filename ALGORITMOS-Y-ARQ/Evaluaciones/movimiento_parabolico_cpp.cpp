#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main(){
    float v, ang, yo, xo, dt, x, y, theta, g = 9.8, t;
    int n, i;
    
    cout << "Ingrese la posición inicial \n" << "Posición en X: \n" ; cin >> xo; cout << "Posición en Y:\n"; cin >> yo;
    cout << "Ingrese la velocidad inicial:\n"; cin >> v;
    cout << "Ingrese el angulo de inclinación (grados): \n"; cin >> ang;
    cout << "Ingrese el numero de saltos: "; cin >> n;

    theta = ang * M_PI/180;
    t = (v * sin(theta))/g;
    dt = (2*t)/n;
    float X[n], Y[n], vy[n];

    if (yo == 0)
    {
        for (i=0; i < n; i++)
        {
            X[i] = xo + (v * cos(theta))*i*dt;
            vy[i] = (v * sin(theta)) - (g * i*dt);
            Y[n] = yo +  (v * sin(theta))*(i * dt) - (g * (i * dt) * (i * dt))/2;
            cout << "x_" << i << ":\n" << X[i] << "\n";
            cout << "y_" << i << ":\n" << Y[i] << "\n";
        }
         
    }
    else
    {
        i=0;
        y = yo;
        while (y>0)
        {
            X[i] = xo + (v * cos(theta))*(i * dt);
            vy[i] = (v * sin(theta)) - (g * (i * dt));
            Y[i] = yo +  (v * sin(theta))*(i * dt) - (g * (i * dt) * (i * dt)) / 2;
            y = yo +  (v * sin(theta))*(i * dt) - (g * (i * dt) * (i * dt)) / 2;
            cout << "x_" << i << ": " << X[i] << "\n";
            cout << "y_" << i << ": " << Y[i] << "\n";
            i = i + 1;
        }
        
    }

    return 0;
}
