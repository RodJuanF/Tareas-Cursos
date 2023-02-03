#include <iostream>

using namespace std;

int main()
{
    float promedio, n, d=0, suma=0; 
    int i;
    
    cout<< "introduzca la cantidad de numeros que desea promediar: "; cin>> n;

    for(i=1; i <=n; i++) 
    {
        cout<< "introduzca el valor de la variable "<<i<<":"; cin>> d; 
        suma = suma+=d ;
    }
    promedio = suma/n; 

    cout<<"el promedio es "<<promedio<< endl;
    
    return 0;
}