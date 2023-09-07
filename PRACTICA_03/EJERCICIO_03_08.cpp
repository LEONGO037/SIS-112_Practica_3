// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 06/09/2023
// Fecha modificacion: 06/09/2023
// Numero de ejericio: 8
// Problema planteado: Multiplique dos matrices una de N x M y la otra de M x N
#include<iostream>
#include<random>
using namespace std;
int main()
{
    int fila, columna;
    cout<<"Ingrese la cantidad de filas y columnas de las matrices\n";cin>>fila>>columna;
    int Matriz1[fila][columna], Matriz2[columna][fila], Multiplicacion[fila][fila];
    cout<<"La primera matriz es:\n";
    for(int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            Matriz1[i][j]=rand()%10;
            cout<<Matriz1[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"La segunda matriz es:\n";
    for(int i=0;i<columna;i++)
    {
        for(int j=0;j<fila;j++)
        {
            Matriz2[i][j]=rand()%10;
            cout<<Matriz2[i][j]<<" ";
        }
        cout<<"\n";
    }
    //Multiplica ambas matrices
    for (int i = 0; i < fila; i++)
        {
        for (int j = 0; j < fila; j++)
        {
            Multiplicacion[i][j] = 0;
            for (int k = 0; k < columna; k++)
                Multiplicacion[i][j] += Matriz1[i][k] * Matriz2[k][j];
        }
    }
    cout<<"La multiplicacion de las matrices es:\n";
    for(int i=0;i<fila;i++)
    {
        for(int j=0;j<fila;j++)
            cout<<Multiplicacion[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
