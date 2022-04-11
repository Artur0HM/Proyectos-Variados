#include <iostream>
using namespace std;

int main(){

    int numero_zapatos;
    int precio = 80;
    float descuento_uno = 0.10;
    float descuento_dos = 0.20;
    float descuento_tres = 0.40;


    cout << "Ingrese la cantidad de zapatos que compro: ";
    cin >> numero_zapatos;

    if (numero_zapatos < 10)
    {
        cout << "Ud. compro " << numero_zapatos << " zapato el precio total es: " << numero_zapatos * precio << " dolares.";
    }
    
    else if (numero_zapatos <= 10 && numero_zapatos < 20)
    {
        cout << "Ud. compro " << numero_zapatos << " zapatos el precio total es de " << numero_zapatos * precio << " dolares. Tienes un descuento del 10%, en total debera pagar " << numero_zapatos * precio - ((numero_zapatos * precio) * descuento_uno); 
    }
    
    else if (numero_zapatos <= 20 && numero_zapatos < 30)
    {
        cout << "Ud. compro " << numero_zapatos << " zapatos el precio total es de " << numero_zapatos * precio << " dolares. Tienes un descuento del 20%, en total debera pagar " << numero_zapatos * precio - ((numero_zapatos * precio) * descuento_dos);
    }

    else if (numero_zapatos >= 30)
    {
        cout << "Ud. compro " << numero_zapatos << " zapatos el precio total es de " << numero_zapatos * precio << " dolares. Tienes un descuento del 40%, en total debera pagar " << numero_zapatos * precio - ((numero_zapatos * precio) * descuento_tres);
    }

    return 0;
}