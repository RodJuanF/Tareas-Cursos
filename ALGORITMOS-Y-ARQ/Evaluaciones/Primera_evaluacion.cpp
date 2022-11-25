#include <iostream> //para entrada y salida de información
#include <cmath> //Para funciones matemáticas
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	
	//PRIMER PUNTO:
	cout<<"Primer punto \n";
	int n,signo = 1;
    float s = 0.,pi;
    
    cout<<"Ingrese la cantidad de terminos a sumar: ";
    cin>>n;
    
    int i=1;
    while (i<=n)
    {
        s=s+signo*(1/(float)(2*i-1));
        signo=signo*(-1);
        i=i+1;
    }
    
    pi=4*s;
    cout<<"Su valor aproximado de pi es:  " <<pi<< "\n";
	
	//SEGUNDO PUNTO:
	cout<<"Segundo punto \n";	
    int j;
    float suma=0., promedio;
    srand(time(0));
    
    cout << "Introduzca el numero de valores aleatorios que desea: "; cin >> n; //cin>> me guarda en la variable n

    double aleat;
    double A[n],B[n];
	
    for (i=0; i<n; i++){
        aleat = rand() %11;
        A[i]= aleat;
        suma = suma + A[i];
        promedio = suma/n;
        
    }
    
    //Impresión de los números aleatorios en pantalla
    cout << "(" ;
    for(i=0; i<n; i++){
        cout << " " << A[i] <<" ";
  
    }
    cout << ")" << "\n";
	
	string r;
    cout << "¿Desea ver el promedio de estos numeros y los numeros mayores al promedio? y/n: \n"; cin >> r;

    if (r == "y")
    {
        cout << "El promedio de sus numeros es: " << promedio << "\n";
        cout << "Los numeros mayores son: \n";
        cout << "(";
        for (i=0; i<n; i++)
            {
                if (A[i]>promedio)
                    {
                        B[i] = A[i];
                    }
                    else
                    {
                        B[i] =0;
                    }
                cout << " " << B[i] << " ";
            }
        cout << ")";        
    }
    else 
    {
        cout << "\n El programa ha terminado.";
    }
    
    //TERCER PUNTO
	cout<<"\n Tercer punto \n";
	double rad;
	cout << "Introduzca un ángulo de rotación (en radianes): ";
	cin >> rad;
	double M[2][2] = {{cos(rad),-sin(rad)},{sin(rad),cos(rad)}};
	double nuevas_aristas[4][2];

	for (i=1; i<5; i+=1){
		cout << "Introduzca los valores del vértice " << i <<" separados por enter: " <<endl;
		double arista[2], x, y;
		cin >> x >> y;
		arista[0] = x, arista[1]=y;
		nuevas_aristas[i][0] = M[0][0]*arista[0]+M[0][1]*arista[1];
		nuevas_aristas[i][1] = M[1][0]*arista[0]+M[1][1]*arista[1];
		cout << "El nuevo vértice "<< i <<" es: ("<< nuevas_aristas[i][0]<<","<<nuevas_aristas[i][1]<<")"<<endl;
	}
return 0;
}
