#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

vector<double> permute(string arr, int start, int end, int k, vector<double> &vfactor) {
    if (k == 0) {
        // imprime la permutación actual

        string digito = "";
        for (int i = 0; i <= end/2; i++) {
            digito += arr[i] ;
        }
        vfactor.push_back(stoi(digito));
    } else {
        for (int i = start; i <= end; i++) {
            swap(arr[start], arr[i]);
            permute(arr, start + 1, end, k-1,vfactor);
            swap(arr[start], arr[i]);
        }
    }
    return vfactor;
}

bool isVampire(long long int n) 
{
    // Convertir el número a string para poder trabajar con sus dígitos
    string n_str = to_string(n);
    int len = n_str.length();
    int tam, temp;

    if (len%2 == 0)
    {
        // Crear una lista de todas las combinaciones posibles de dígito
        vector<double> vfactor;   
        
        vector<double> my_vector;
        my_vector = permute(n_str, 0, len-1, len/2,vfactor);

        // Verificar si alguna combinación de dígitos forma un factor
        // que multiplicado por otro factor da el número original
        for (int i = 0; i < my_vector.size(); i++) {
            for (int j = 0; j < my_vector.size(); j++) 
            {
                if (i!=j)
                {
                    temp = my_vector[i] * my_vector[j];
                    if (temp == n)
                    {
                        cout<< my_vector[i] << "*" << my_vector[j] << "= " << my_vector[i]*my_vector[j];
                        cout << endl;
                        return true;
                    }
                }
            }
        }     
    }
    return false;
}

int main() {
    long long int n;
    cout <<"Ingrese un número: ";    cin >> n;

    if (isVampire(n)) {
        cout << n << " es un número vampiro." << endl;
    } else {
        cout << n << " no es un número vampiro." << endl;
    }

    return 0;
}

