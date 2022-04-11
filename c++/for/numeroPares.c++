/*Hacer un programa en C++ que escriba todos los números pares del 1 al 1 000.*/

#include <iostream>
using namespace std;
int main () {

    int numeroPositivo;

    cout << "Ingresa um número Positivo: ";
    cin >> numeroPositivo;

        if (numeroPositivo > 0)
        {
            for (int i = 1; i <= numeroPositivo; i++)
            {
                if (i % 2 == 0)
                {
                    cout << "Los números pares del 1 al " << numeroPositivo << " es: " << i << endl;
                }
                
            }
            
        }
        
        else {
            cout << "Debes ingresar un número POSITIVO.";
        }


    return 0;
}