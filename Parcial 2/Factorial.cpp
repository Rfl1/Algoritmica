#include <iostream>

using namespace std;

// Función para calcular el factorial de un número
long long calcularFactorial(int numero) {
    long long factorial = 1;
    for (int i = 1; i <= numero; ++i) {
        factorial *= i;
    }
    return factorial;
}

// Función para mostrar la tabla de multiplicar de un número
void mostrarTablaMultiplicar(int numero) {
    int i = 1;
    do {
        cout << numero << " x " << i << " = " << numero * i << endl;
        i++;
    } while (i <= 10);
}

int main() {
    int opcion;
    int numero;

    while (true) {  // Ciclo infinito para el menú
        // Mostrar menú
        cout << "\n=== MENÚ ===" << endl;
        cout << "1. Calcular factorial y mostrar tabla de multiplicar" << endl;
        cout << "2. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Solicitar número al usuario
                cout << "Ingrese un número entero positivo: ";
                cin >> numero;

                // Validar que el número sea positivo
                if (numero > 0) {
                    // Calcular y mostrar el factorial
                    long long factorial = calcularFactorial(numero);
                    cout << "El factorial de " << numero << " es: " << factorial << endl;

                    // Mostrar la tabla de multiplicar del número ingresado
                    cout << "\nTabla de multiplicar del " << numero << ":\n";
                    mostrarTablaMultiplicar(numero);
                } else {
                    cout << "Por favor, ingrese un número entero positivo.\n";
                }
                break;

            case 2:
                cout << "Saliendo del programa...\n";
                return 0;  // Salir del programa

            default:
                cout << "Opción no válida. Por favor, intente nuevamente.\n";
                break;
        }
    }

    return 0;
}
