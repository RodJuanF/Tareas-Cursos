/*Construir un programa que lea un número entero positivo n y después genere n valores de
manera aleatoria (entre 0 y 10) y los guarde en un vector. El programa deberá hallar la media de los
elementos, y después buscar entre ellos aquellos que sean mayores que la media. El resultado que
entregara el programa es la media de los números y una lista de elementos que cumplan con la
condición de ser mayores que la media. (nota: se deberá usar un segundo vector para la lista de
elementos mayores que la media)*/
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    int n, i, j;
    float suma=0, promedio;
    srand(time(0));
    
    cout << "Introduzca el numero de valores aleatorios que desea: "; cin >> n; //cin>> me guarda en la variable n

    double aleat;
    double A[n],B[n];

    for (i=0; i<n; i++){
        aleat = rand() %11;
        A[i]= aleat;
        suma= suma + A[i];
        promedio = suma/n;
        
    }
    cout << "(" ;
    for(i=0; i<n; i++){
        cout << " " << A[i] <<" ";
  
    }
    cout << ")" << "\n";

    string r, x;

    cout << "¿Desea ver el promedio de estos numeros? y/n: \n"; cin >> r;

    if (r == "y")
    {
        cout << "El promedio de sus numeros es: " << promedio << "\n";
        cout << "Desea ver los numeros mayores al promedio? y/n: \n"; cin >> x;

        if ( x == "y")
        {
            cout << "(";
            for (i=0; i<n; i++)
            {
                if (A[i]>promedio)
                    {
                        B[i] = A[i];
                    }
                    else
                    {
                        B[i] = 0;
                    }
                cout << " " << B[i] << " ";
            }
        cout << ")"; 
        }
        else{ cout << "El programa ha terminado.";}       
    }
    else 
    {
        cout << "\n El programa ha terminado.";
    }
   
    return 0;
}
