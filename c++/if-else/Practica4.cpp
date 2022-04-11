// PROMEDIO DE NOTAS

#include <iostream>
using namespace std;
int main(){
    float nota_1, nota_2, nota_3, nota_final;

    cout << "PROMEDIO DE NOTA FINAL" << endl;

    cout << "Ingrese la primera nota: ";
    cin >> nota_1;

    cout << "Ingrese la segunda nota: ";
    cin >> nota_2;

    cout << "Ingrese la tercera nota: ";
    cin >> nota_3;

    nota_final = (nota_1 + nota_2 + nota_3) / 3;

    cout << "La nota final es: " << nota_final;


    return 0;
}