#include <iostream>
#include <vector>
#include <algorithm> // Para usar la función std::reverse
using namespace std;

// Función para calcular la suma de los elementos
int calcularSuma(const vector<int>& arreglo) {
    int suma = 0;
    for(int num : arreglo) {
        suma += num;
    }
    return suma;
}

// Función para calcular el promedio de los elementos
double calcularPromedio(const vector<int>& arreglo) {
    int suma = calcularSuma(arreglo);
    return static_cast<double>(suma) / arreglo.size();
}

// Función para encontrar el valor mayor del arreglo
int encontrarMayor(const vector<int>& arreglo) {
    return *max_element(arreglo.begin(), arreglo.end());
}

// Función para encontrar el valor menor del arreglo
int encontrarMenor(const vector<int>& arreglo) {
    return *min_element(arreglo.begin(), arreglo.end());
}

// Función para mostrar los elementos de un arreglo
void mostrarArreglo(const vector<int>& arreglo) {
    for(int num : arreglo) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n;
    
    // Solicitar el número de elementos
    cout << "Ingrese el número de elementos: ";
    cin >> n;
    
    vector<int> arreglo(n);
    
    // Ingresar los elementos al arreglo
    cout << "Ingrese los elementos del arreglo:" << endl;
    for(int i = 0; i < n; ++i) {
        cin >> arreglo[i];
    }
    
    // Calcular la suma, el promedio, el mayor y menor valor
    int suma = calcularSuma(arreglo);
    double promedio = calcularPromedio(arreglo);
    int mayor = encontrarMayor(arreglo);
    int menor = encontrarMenor(arreglo);
    
    // Mostrar resultados
    cout << "Suma de los elementos: " << suma << endl;
    cout << "Promedio de los elementos: " << promedio << endl;
    cout << "Mayor valor: " << mayor << endl;
    cout << "Menor valor: " << menor << endl;
    
    // Mostrar los elementos en orden original
    cout << "Elementos en orden original: ";
    mostrarArreglo(arreglo);
    
    // Mostrar los elementos en orden inverso
    cout << "Elementos en orden inverso: ";
    reverse(arreglo.begin(), arreglo.end());
    mostrarArreglo(arreglo);

    return 0;
}