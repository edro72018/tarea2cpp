#include <iostream>
#include <locale>
using namespace std;
void clear() {
    // Secuencia ANSI para limpiar la pantalla y mover el cursor a la posición 0,0
    cout << "\033[2J\033[1;1H";
    //clear();
}


// Función para calcular el promedio de tres calificaciones
float calcularPromedio(float cal1, float cal2, float cal3) {
    return (cal1 + cal2 + cal3) / 3.0;
}

// Función para encontrar el mayor de tres números e indicar si hay igualdad
int calcularMayor(int num1, int num2, int num3) {
    if (num1 == num2 && num2 == num3) {
        cout << "Los tres números son iguales." << endl;
        return num1;
    } else if (num1 == num2 && num1 > num3) {
        cout << "Dos números son iguales y son los mayores." << endl;
        return num1;
    } else if (num1 == num3 && num1 > num2) {
        cout << "Dos números son iguales y son los mayores." << endl;
        return num1;
    } else if (num2 == num3 && num2 > num1) {
        cout << "Dos números son iguales y son los mayores." << endl;
        return num2;
    } else {
        int mayor = num1;
        if (num2 > mayor) mayor = num2;
        if (num3 > mayor) mayor = num3;
        return mayor;
    }
}

// Función que muestra el menú y retorna la opción seleccionada
int menu() {
    int opcion;
    cout << "\nMenú de opciones:" << endl;
    cout << "1. Calcular el promedio de tres calificaciones." << endl;
    cout << "2. Encontrar el mayor de tres números." << endl;
    cout << "3. Salir." << endl;
    cout << "Selecciona una opción: ";
    cin >> opcion;
    return opcion;
}

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8"); 
    int opcion;
    while (true) {
        opcion = menu();
        if (opcion == 3) {
            cout << "Saliendo..." << endl;
            break;
        }
        
        if (opcion == 1) {
            float cal1, cal2, cal3;
            cout << "Ingresa tres calificaciones: ";
            cin >> cal1 >> cal2 >> cal3;
            cout << "El promedio es: " << calcularPromedio(cal1, cal2, cal3) << endl;
        } else if (opcion == 2) {
            int num1, num2, num3;
            cout << "Ingresa tres números: ";
            cin >> num1 >> num2 >> num3;
            cout << "El mayor número es: " << calcularMayor(num1, num2, num3) << endl;
        } else {
            cout << "Opción no válida. Inténtalo de nuevo." << endl;
        }
    }
    
    return 0;
}