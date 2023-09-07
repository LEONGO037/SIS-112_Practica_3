// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 06/09/2023
// Fecha modificacion: 06/09/2023
// Numero de ejericio: 9
// Problema planteado: Traspones una matriz de N x M
#include<iostream>
#include<random>
using namespace std;
int main()
{
    int filas, columnas;
    cout<<"Ingrese las folas y columas de la matriz\n";cin>>filas>>columnas;
    int Matriz[filas][columnas], Traspuesta[columnas][filas];
    //Crea y traspone la matriz
    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columnas;j++)
        {
            Matriz[i][j]=rand()%10;
            Traspuesta[j][i]=Matriz[i][j];
        }
    }
    cout<<"La matriz es:\n";
    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columnas;j++)
            cout<<Matriz[i][j]<<" ";
        cout<<"\n";
    }
    cout<<"La traspuesta es:\n";
    for(int i=0;i<columnas;i++)
    {
        for(int j=0;j<filas;j++)
            cout<<Traspuesta[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
