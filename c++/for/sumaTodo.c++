#include <iostream>
using namespace std;
int main () {

    int numero, suma = 0;

    cout << "Ingresa un número mayor a CERO: ";
    cin >> numero;

    cout << "VAS A SUMAR DEL 1 AL " << numero << "." << endl;
        if (numero > 0)
        {
            for (int i = 1; i <= numero; i++)
            {
                suma = suma + i;
            }             
                cout << "La suma del 1 al " << numero << " es: " << suma <<"." << endl;
        }

        else {
            cout << "Debes ingresar un númeto mayor a CERO.";
        }
        
    return 0;
}