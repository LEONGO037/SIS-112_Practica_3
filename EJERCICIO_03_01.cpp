// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 05/09/2023
// Fecha modificacion: 05/09/2023
// Numero de ejericio: 1
// Problema planteado: Elabore un programa que lea una matriz de orden n x n y la cambie la fila 1 por la fina n
#include<iostream>
using namespace std;
int main()
{
    int tamanio;
    cout<<"Ingrese el tamanio de la matriz\n";
    cin>>tamanio;
    int Matriz[tamanio][tamanio];
    for(int i=0;i<tamanio;i++)
    {
        for (int j=0;j<tamanio;j++)
            cin>>Matriz[i][j];
    }
    //Cambia la primera fila con la ultima
    for(int i=0;i<tamanio;i++)
    {
        int aux=Matriz[0][i];
        Matriz[0][i]=Matriz[tamanio-1][i];
        Matriz[tamanio-1][i]=aux;
    }
    cout<<"Cambiando la primera fila por la ultima:\n";
    for(int i=0;i<tamanio;i++)
    {
        for (int j=0;j<tamanio;j++)
            cout<<Matriz[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
