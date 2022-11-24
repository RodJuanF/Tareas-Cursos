#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, i;
    double m, a, b, sumxy, sumx, sumy, sumxexp2;
    cout << "ingrese un valor de n: " ; cin >> n;
    cout << "\n";
    double X[n], Y[n];
    
    for (i = 0; i < n; i++){
        cout << "ingrese un valor para X[" << i <<"]: " ; cin >> m;
        X[i] = m;
        cout << "ingrese un valor para Y[" << i <<"]: " ; cin >> m;
        Y[i] = m;
    }
    cout << "Hallamos a y b" << endl;
    
    sumxy = 0; sumx = 0; sumy = 0; sumxexp2 = 0; i = 0;
    
    while (i < n)
    {
        sumxy = sumxy + (X[i] * Y[i]);
        sumx = sumx + X[i];
        sumy = sumy + Y[i];
        sumxexp2 = sumxexp2 + (X[i] * X[i]);
        i = i + 1;
    }
    
    a = ( n * (sumxy) - (sumx * sumy))/(n * sumxexp2 - (sumx * sumx));


    b = (sumy - (a * sumx))/n;

    cout << "El valor de a es: " <<a << endl;
    cout << "El valor de b es: " << b << endl;
    return 0;
}