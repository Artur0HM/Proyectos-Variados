#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un Número para saber si es negativo o positivo" << endl;

    cout << "INGRESE UN NÚMERO: ";
    cin >> numero;

    if (numero > 0)
    {
        cout << "El número " << numero << " que ingresaste es positivo";
    }
    else if (numero == 0)
    {
        cout << "El número que ingresaste es " << numero; 
    }
    

    else
    {
        cout << "El número " << numero << " que ingresaste es negativo";
    }
    

    return 0;
}