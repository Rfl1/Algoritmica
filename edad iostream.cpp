#include <iostream>

using namespace std;

int main()
{
    int dia, mes, ano, edad;

    cout << "Introduzca su dia de nacimiento: ";
    cin >> dia;

    cout << "Introduzca su mes de nacimiento: ";
    cin >> mes;

    cout << "Introduzca su ano de nacimiento: ";
    cin >> ano;

    edad = 2024 - ano;

    cout << "Su edad es " << edad << endl;

    return 0;
}

