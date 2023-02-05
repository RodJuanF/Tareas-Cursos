#include <iostream>

using namespace std;

int main()
{
    int suma, ultimo=1, penultimo=1, n;

    cout << "introduzca el numero de terminos de la sumatoria: ";
    cin >> n;
    for (int i=1; i<=n; i++)
    {   
        if (i== 1)
        {
            cout << penultimo << " ";
        }
        if(i==2)
        {
            cout << ultimo << " ";
        }
        
        if (i>2)
        {
            suma = ultimo + penultimo;
            penultimo =  ultimo;
            ultimo = suma;
            cout << ultimo << " ";
        }

    }
    cout << endl;

    return 0;
}