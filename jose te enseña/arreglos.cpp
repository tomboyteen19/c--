#include <iostream>

using namespace std;

const int FILAS = 3;
const int COLUMNAS = 3;

void transponerMatriz(int matriz[FILAS][COLUMNAS]) {
    int resultado[COLUMNAS][FILAS];

    // Transponer la matriz
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            resultado[j][i] = matriz[i][j];
        }
    }

    // Mostrar la matriz transpuesta
    cout << "Matriz Transpuesta:" << endl;
    for (int i = 0; i < COLUMNAS; ++i) {
        for (int j = 0; j < FILAS; ++j) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrizOriginal[FILAS][COLUMNAS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Mostrar la matriz original
    cout << "Matriz Original:" << endl;
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << matrizOriginal[i][j] << " ";
        }
        cout << endl;
    }

    // Calcular y mostrar la transposición de la matriz
    transponerMatriz(matrizOriginal);
    system("pause");
    return 0;
}