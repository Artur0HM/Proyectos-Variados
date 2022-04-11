#include <iostream>
using namespace std;
int main () {

    int numeroMultiplos;
    int numeroMaximo;

    cout << "Ingresa un número para sacer el multiplo: ";
    cin >> numeroMultiplos;

    cout << "SACAREMOS EL MULTIPLO DEL NÚMERO " << numeroMultiplos << endl;
    
        if (numeroMultiplos > 0)
        {
            cout << "Sacaremos el multiplo del " << numeroMultiplos << " del 1 al: ";
            cin >>  numeroMaximo;
                for (int i = 1; i <= numeroMaximo; i++)
                {
                    cout << i << " El multiplo de " << numeroMultiplos << " del 1 al " << numeroMaximo << " :" << numeroMultiplos * i << endl;
                }
            
        }
        
        else {
            cout << "Debes ingresar un número mayor a CERO.";
        }


    return 0;
}