#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int radio;
    const float PI = 3.1416;
    int resultado;

    cout << "Ingresa el radio: ";
    cin >> radio;

    resultado = (4 * PI * pow(radio, 3))/3;

    cout << "El volumen es: " << resultado;    
    
    return 0;
}