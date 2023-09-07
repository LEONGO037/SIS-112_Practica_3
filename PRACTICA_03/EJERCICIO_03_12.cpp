// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 06/09/2023
// Fecha modificacion: 06/09/2023
// Numero de ejericio: 12
// Problema planteado: Ingresa una matriz de NxN y a continuación:
// a. Elimine una fila ingresada por el usuario.
// b. Elimine una columna ingresada por el usuario.
// c. Inserte una fila por un valor determinado por el usuario.
// d. Inserte una columna por un valor determinado por el usuario
#include <iostream>
#include <random>
#include <vector>
using namespace std;
int main()
{
    int orden;
    cout<<"Ingrese el orden de la matriz\n";cin>>orden;
    vector<vector<int>> Matriz(orden);
    cout<<"Ingrese los valores de la matriz\n";
    vector<int> aux(orden);
    for(int i=0;i<orden;i++)
    {
        for(int j=0;j<orden;j++)
            cin>>aux[j];
        Matriz[i]=aux;
    }
    int eliminar=rand()%(orden)-0;
    Matriz.erase(Matriz.begin()+eliminar);
    cout<<"a. Eliminar una fila\n";
    for(int i=0;i<orden-1;i++)
    {
        for(int j=0;j<orden;j++)
            cout<<Matriz[i][j]<<" ";
        cout<<"\n";
    }
    eliminar=rand()%(orden)-0;
    cout<<"b. Eliminar una columna\n";
    vector<vector<int>> nuevaMatriz;
    for(int i=0;i<orden-1;i++)
    {
        vector<int> QuitarColumna;
        for(int j=0;j<orden;j++)
        {
            if(j!=eliminar)
                QuitarColumna.push_back(Matriz[i][j]);
        }
        nuevaMatriz.push_back(QuitarColumna);
    }
    Matriz=nuevaMatriz;
    for(int i=0;i<orden-1;i++)
    {
        for(int j=0;j<orden-1;j++)
            cout<<Matriz[i][j]<<" ";
        cout<<"\n";
    }
    //Agrega una fila
    int nueva;
    cout<<"Ingrese un valor que desea agregar a la matriz, se hara una fila con este valor\n";cin>>nueva;
    cout<<"c. Inserte una fila por un valor determinado por el usuario.\n";
    vector<int>Filanu;
    for(int i=0;i<orden-1;i++)
        Filanu.push_back(nueva);
    Matriz.push_back(Filanu);
    for(int i=0;i<orden;i++)
    {
        for(int j=0;j<orden-1;j++)
            cout<<Matriz[i][j]<<" ";
        cout<<"\n";
    }
    //Agrega una columna
    cout<<"Ingrese un valor que desea agregar a la matriz, se hara una columna con este valor\n";cin>>nueva;
    cout<<"d. Inserte una columna por un valor determinado por el usuario\n";
    for(int i=0;i<orden;i++)
    {
        for(int j=0;j<orden;j++)
        {
            cout<<Matriz[i][j]<<" ";
            if(j==orden-2)
                Matriz[i].push_back(nueva);
        }
        cout<<"\n";
    }
    return 0;
}
