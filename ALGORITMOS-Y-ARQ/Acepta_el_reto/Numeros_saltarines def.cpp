#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<int> digitos;
    string numero;
    int indice=0, i=0, digito=0;
    
    cout << "Ingrese el numero: "; cin >> numero;
   
    int len = numero.length();
    bool visitado[len] = {false};

    string num;
    for (int k = 0; k < len; k++)
    {   num = numero[k];
        digitos.push_back(stoi(num));
    }

    while (visitado[indice]!= true)
    {   
        visitado[indice]= true;
        digito = digitos[indice];
        indice = (indice + digito)%len;
        i++;
    }
    
    if(i==len){
        cout << "SALTARIN";
    } else {
        cout << "NORMAL";
    }

    return 0;
}