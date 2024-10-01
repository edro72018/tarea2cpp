#include <iostream>
#include <locale>
using namespace std;

// Secuencia ANSI para limpiar la pantalla y mover el cursor a la posición 0,0
void clear() {
    cout << "\033[2J\033[1;1H";
    //clear();
}

// Función para calcular el promedio de tres calificaciones
float calcularPromedio(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0;
}

// Función para encontrar el mayor de tres números e indicar si hay igualdad
int calcularMayor(int n1, int n2, int n3) {
    if (n1 == n2 && n2 == n3) {
        cout << "Los tres números son iguales." << endl;
        return n1;
    } else if (n1 == n2 && n1 > n3) {
        cout << "Dos números son iguales y son los mayores." << endl;
        return n1;
    } else if (n1 == n3 && n1 > n2) {
        cout << "Dos números son iguales y son los mayores." << endl;
        return n1;
    } else if (n2 == n3 && n2 > n1) {
        cout << "Dos números son iguales y son los mayores." << endl;
        return n2;
    } else {
        int mayor = n1;
        if (n2 > mayor) mayor = n2;
        if (n3 > mayor) mayor = n3;
        return mayor;
    }
}

// Función que muestra el menú y retorna la opción seleccionada
int menu() {
    int opcion;
    cout << "Menú de opciones:" << endl;
    cout << "1. Calcular el promedio de tres calificaciones." << endl;
    cout << "2. Encontrar el mayor de tres números." << endl;
    cout << "3. Salir." << endl;
    cout << "Selecciona una opción: ";
    cin >> opcion;
    return opcion;
}

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8"); 
    //clear();
    int opcion;
    while (true) {
        //clear();
        opcion = menu();
        if (opcion == 3) {
            clear();
            cout << "Saliendo..." << endl;
            break;
        }
        
        if (opcion == 1) {
            clear();
            float cal1, cal2, cal3;
            cout << "Ingresa tres calificaciones: " << endl << "Ingresa la primera calificación: ";
            cin >> cal1;
            while(cal1 > 10 || cal1 < 0){
                cout << "Calificación de válida." << endl;
                cin >> cal1;
            }
            cout << "Ingresa segunda calificación: ";
            cin >> cal2;
            while(cal2 > 10 || cal2 < 0){
                cout << "Calificación no válida. " << endl;
                cin >> cal2;
            }
            cout << "Ingresa tercera calificación: ";
            cin >> cal3;
            while(cal3 > 10 || cal3 <0){
                cout << "Calificación no válida. ";
                cin >> cal3;
            }
            clear();
            cout << "El promedio es: " << calcularPromedio(cal1, cal2, cal3) << endl << "------------------------------------------" << endl;

        } else if (opcion == 2) {
            clear();
            int num1, num2, num3;
            cout << "Ingresa tres números: ";
            cin >> num1 >> num2 >> num3;
            cout << "El mayor número es: " << calcularMayor(num1, num2, num3) << endl << "-----------------------------------------" << endl;
        } else {
clear();
            cout << "Opción no válida. Inténtalo de nuevo." << endl;

        }
    }
    
    return 0;
}