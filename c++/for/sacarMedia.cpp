#include <iostream>
using namespace std;
int main () {

    int cuantasNotas;
    float ingresarNotas, suma, promedioFinal;

    cout << "Cuantas notas vas a ingresar: ";
    cin >> cuantasNotas;
    cout << "DEBES INGRESAR " << cuantasNotas << " NOTAS" << endl;

        if (cuantasNotas > 0)
        {
            for (int i = 1; i <= cuantasNotas; i++)
            {
                cout << "Ingresa la notas número " << i << ": ";
                cin >> ingresarNotas;
                suma = suma + ingresarNotas ;

            }
            promedioFinal = suma / cuantasNotas;
            cout << "EL PROMEDIO DE TUS " << cuantasNotas << " NOTAS ES." << endl;

                if (promedioFinal > 10)
                {
                    cout << "Tu promedio de tus " << cuantasNotas << " notas es: " << promedioFinal << " Estas aporbado.";
                }

                else {
                    cout << "Tu promedio de tus " << cuantasNotas << " notas es: " << promedioFinal << " Estas desaprobado.";
                }
        }
        
        else {
            cout << "Debes ingresar un número mayor a CERO.";
        }
    return 0;
}