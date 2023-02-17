#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    int casos, i, j, k , num, boleta, digito=0, gana = 0, pierde = 0;

    cout << "Ingrese el numero de casos de prueba: "; cin >> casos;

    double evalua[casos][7], boletas[casos][7];

    for (i = 0; i < casos; i++)
    {
        cout << "Ingrese los digitos del sorteo (7 digitos)" << endl;
        cin >> num;

        while(num>9999999)
        {
            cout << "Numero invalido" << endl << "Ingrese un numero de 7 digitos" << endl;
            cin >> num;
        }
        
        for ( j = 6; j >=0; j--)
        {
            digito = num%10;
            num = num/10;
            evalua[i][j] = digito;
        }
        
        cout << "Ingrese los digitos del boleto (7 digitos)" << endl;
        cin >> boleta;

        for ( j = 6; j >=0; j--)
        {
            digito = boleta%10;
            boleta = boleta/10;

            boletas[i][j] = digito;
        }
    }
    
    for (i = 0; i < casos; i++)
    {
        cout << "Numeros del sorteo " << i+1 << endl;

        for ( j = 0; j < 7; j++)
        {
            cout << evalua[i][j];
        }
        cout << endl;

        cout << "Numeros del boleto " << i+1 << endl;

        for ( j = 0; j < 7; j++)
        {
            cout << boletas[i][j];
        }

        cout << endl;
    }

    for(i=0; i < casos; i++){
    for(j=0; j < 7; j++){
    for(k=0; k < 6; k++){
      if(evalua[i][j]<evalua[i][k]){
        swap(evalua[i][j],evalua[i][k]);
      }

      if(boletas[i][j]<boletas[i][k]){
        swap(boletas[i][j],boletas[i][k]);
      }
    }
  }}

  for (i = 0; i < casos; i++)
    {
        cout << "Numeros del sorteo ordenados " << i+1 << endl;

        for ( j = 0; j < 7; j++)
        {
            cout << evalua[i][j];
        }
        cout << endl;

        cout << "Numeros del boleto ordenados " << i+1 << endl;

        for ( j = 0; j < 7; j++)
        {
            cout << boletas[i][j];
        }

        cout << endl;
    }

    for (i = 0; i < casos; i++)
    {
        gana = 0;
        for (j = 0; j < 7; j++)
        {
            if (evalua[i][j] == boletas[i][j])
            {
                gana = gana + 1;
            }
            
        }
        
        if (gana == 7)
        {
            cout <<"GANA" <<endl;
        }
        else{
            cout << "PIERDE" ;
        }
        
        pierde = 0;
    }
}