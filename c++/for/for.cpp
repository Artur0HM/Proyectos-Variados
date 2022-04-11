#include <iostream>
using namespace std;
int main (){

    /*
    for (int i = 1; i <= 8; i++)
    {
        cout << "Hola Arturo" << endl;
    }
    
    // el factorial es...
    int i, numero, factorial = 1;

    cout << "Ingrese un número: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++)
    {
        factorial = factorial * i;
    }
    
    cout << "El factorial de: " << numero << " es: " << factorial ;

    


    //Mostrar los numeros impares.

    int numero;

    cout << "**********************************" << endl;
    cout << "***   LOS NÚMEROS IMPARES SON  ***" << endl;
    cout << "**********************************" << endl;

    cout << "Ingrese un número: ";
    cin >> numero;


    for (int i = 1; i < numero; i = i + 2)
    {
        cout << "número: " << i << endl;
    }
    
    */


    int numero, i = 0;

    cout << "Ingrese u número: ";
    cin >> numero;

    for (int x = 1; x <= numero; x++)
    {
        if (numero % x == 0)
        {
            i++;
        }
        
    }

    if (i == 2)
    {
        cout << "Número primo";
    }
    
    else {
        cout << "no es un número primo";
    }


    return 0;
}   