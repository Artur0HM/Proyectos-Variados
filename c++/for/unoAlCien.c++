/*Hacer un programa en C++ que escriba los números del 1 al 100.*/

#include <iostream>
using namespace std;
int main () {

    int numero;

    cout << "Ingrese el número 100: ";
    cin >> numero;

        if (numero == 100)
        {
            for (int i = 1; i <= numero; i++)
            {
                cout << "Es el número: " << i << endl;
            }
        }
        
        else {
            cout << "El único número que puedes ingresar es el 100";
        }

    return 0;
}