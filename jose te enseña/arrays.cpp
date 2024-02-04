#include <iostream>
using namespace std;
const int FILAS=3;
const int COLUMNAS=3;

void transponerMatriz(int matriz[FILAS][COLUMNAS]);


int main(){
    int matriz[FILAS][COLUMNAS]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < FILAS; i++)
    {
        for (int l = 0; l < COLUMNAS; l++)
        {
        cout<<matriz[i][l]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    transponerMatriz(matriz);
    system("pause");
    return 0;
}
void transponerMatriz(int matriz[FILAS][COLUMNAS]){
    int resultado[COLUMNAS][FILAS];

    for (int i = 0; i < FILAS; i++)
    {
        for (int l = 0; l < COLUMNAS; l++)
        {
            resultado[l][i]=matriz[i][l];
        }
        
    }
    for (int i = 0; i < COLUMNAS; i++)
    {
        for (int l = 0; l < FILAS; l++)
        {
            cout<<resultado[i][l]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}