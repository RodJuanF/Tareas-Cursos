#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
  int tamano, numero, i, j, m;
  double L, R;
 
  cout<<"Ingrese el tamano del vector: "; cin >> tamano; cout << endl;

   float vector[tamano];

  cout<<"Ingrese el valor que desea buscar: \n"; cin >> numero;

  for(i=0; i<tamano; i++)
  {
    vector[i] = rand()%10;
  }

  for(i=0; i<tamano; i++)
  {
      printf("\n\t%f\t",vector[i]);
  }

  for(i=0; i < tamano; i++){
    for(j=0; j < tamano-1; j++){
      if(vector[i]<vector[j]){
        swap(vector[i],vector[j]);
      }
    }
  }

  for(i=0; i<tamano; i++)
  {
      printf("\n\t%f\t",vector[i]);
  }

  L = 0; R = tamano-1;
  int encontro = 0;
  while(L<=R && encontro==0){
   m = round((L+R)/2);
   if(vector[m]<numero){ L = m + 1;}
   else {if(vector[m]>numero){ R = m-1;}
        else{if(vector[m] = numero){cout<<"Se encontro el valor: "<<vector[m] << " se encontro en la posicion " << m; encontro = 1;}}}
  }

  if(encontro == 0){cout << "No se encontro el valor."<< endl;}


  return 0;
}
