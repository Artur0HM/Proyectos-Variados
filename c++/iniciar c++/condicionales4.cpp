#include <iostream>
using namespace std;

int main (){

    int horas_trabajadas;
    int horas_de_trabajo_normal = 20;
    int horas_extras = 25;

    cout << "CUANTAS HORAS TRABAJASTE ESTA SEMANA." << endl; 
    cout << "Ingrese cuantas horas trabajaste esta semana: ";
    cin >> horas_trabajadas;

    if (horas_trabajadas <= 40)
    {
        cout << "Esta semana trabajaste " << horas_trabajadas << " horas tu pago de esta semana sera de: " << horas_trabajadas * horas_de_trabajo_normal << " dolares.";
    }
    
    else if (horas_trabajadas > 40)
    {
        cout << "Esta semana trabajaste " << horas_trabajadas << " horas, trabajaste " << horas_trabajadas - 40 << " horas extras tu pago de esta semana es de: " << (40 * horas_de_trabajo_normal) + (horas_trabajadas - 40) * 25 << " dolares.";
    }
    






    return 0;
}