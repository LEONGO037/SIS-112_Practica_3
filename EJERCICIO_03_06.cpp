// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 06/09/2023
// Fecha modificacion: 06/09/2023
// Numero de ejericio: 6
// Problema planteado: Generar la matriz para un orden NxN
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int orden,valorA,valorB, secuencia1=0,secuencia2=1,secuencia3;
    cout<<"Ingrese el orden de la matriz\n";cin>>orden;
    int Matriz[orden][orden];
    for(int i=0;i<orden;i++)
    {
        for(int j=0;j<orden;j++)
        {
            Matriz[i][j]=secuencia2;
            secuencia3=secuencia2+secuencia1;
            secuencia1=secuencia2;
            secuencia2=secuencia3;
            cout<<Matriz[i][j]<<setw(12);
        }
        cout<<"\n";
    }
    return 0;
}
