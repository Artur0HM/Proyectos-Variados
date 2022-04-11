#include <iostream>
using namespace std;

int main (){

    int numero;
    cout << "EL NÚMERO ES PAR O IMPAR" <<endl;

    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero % 2 == 0)
    {
        cout << "El número " << numero << "es par";
    }
    else{
        cout << "El número " << numero << "es impar";
    }
    
    return 0;

}