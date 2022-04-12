#include <iostream>
using namespace std;
int main () {

    char nombresApellidos [50];
    int edad;

    cout << "Ingresa tus nombres completos: ";
    cin.getline(nombresApellidos,50);

    cout << "Cuantos años tienes: ";
    cin >> edad;

        if (edad > 17 && edad < 26)
        {
            cout << "Bienvenido " << nombresApellidos << endl;
            cout << "Tu edad es: " << edad << endl;
            cout << "ERES UN ESTUDIANTE BECADO, FELICIACIONES";
        }

        else {
            cout << "Bienvenido " << nombresApellidos << endl;
            cout << "Tu edad es: " << edad << endl;
            cout << "NO ERES UN ESTUDIANTE BECADO, PARA LA PROXIMA";
        }
        

    return 0;
}