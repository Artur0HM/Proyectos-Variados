// AREA DE UN TRIANGULO
#include <iostream>
using namespace std;
int main(){
    float base;
    float altura;
    float resultado;

    cout << "EL AREA DE UN TRIANGULO." << endl;
    
    cout << "Ingresa la Base: ";
    cin >> base;

    cout << "Ingresa la altura: ";
    cin >> altura;

    resultado = base * altura / 2;
    cout << "El area del triandulo es: " << resultado;


    return 0;
}