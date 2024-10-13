#include <iostream>
#include <locale>
#include <iomanip>
#include <limits>
using namespace std;
const int N = 3; // Tamaño de la matriz
int main() {
    int matriz[N][N];
    // Solicitar al usuario los valores de la matriz
    cout << "Ingrese los valores para la matriz 3x3:" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Variables para almacenar las sumas de filas, columnas y diagonales
    int sumaFila[N] = {0}, sumaColumna[N] = {0};
    int sumaDiagonalPrincipal = 0, sumaDiagonalSecundaria = 0;

    // Calcular la suma de cada fila y columna
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            sumaFila[i] += matriz[i][j]; // Suma de la fila
            sumaColumna[j] += matriz[i][j]; // Suma de la columna
        }
    }

    // Calcular la suma de la diagonal principal y secundaria
    for (int i = 0; i < N; ++i) {
        sumaDiagonalPrincipal += matriz[i][i];
        sumaDiagonalSecundaria += matriz[i][N - i - 1];
    }

    // Encontrar el mayor y el menor número de la matriz
    int mayor = numeric_limits<int>::min();
    int menor = numeric_limits<int>::max();

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    // Mostrar la matriz con las sumas de las filas
    cout << "\nMatriz con sumas (formato tipo Excel):\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << setw(5) << matriz[i][j]; // Mostrar cada valor de la matriz con 5 espacios
        }
        cout << " | " << setw(5) << sumaFila[i] << endl; // Mostrar la suma de la fila al final
    }

    // Mostrar las sumas de las columnas y las diagonales
    cout << "------------------------\n";
    for (int j = 0; j < N; ++j) {
        cout << setw(5) << sumaColumna[j]; // Mostrar la suma de cada columna
    }
    
    // Mostrar las sumas de las diagonales
    cout << " | " << setw(5) << sumaDiagonalPrincipal << endl; // Suma de la diagonal principal
    for (int j = 0; j < N; ++j) {
        cout << "     "; // Espacios vacíos para alinear con la matriz
    }
    cout << " | " << setw(5) << sumaDiagonalSecundaria << endl; // Suma de la diagonal secundaria

    // Mostrar el mayor y menor número de la matriz
    cout << "\nMayor número en la matriz: " << mayor << endl;
    cout << "Menor número en la matriz: " << menor << endl;

    return 0;
}
