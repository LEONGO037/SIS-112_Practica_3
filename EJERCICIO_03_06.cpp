// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 06/09/2023
// Fecha modificacion: 06/09/2023
// Numero de ejericio: 5
// Problema planteado: Generar la matriz para un orden NxN
#include<iostream>
#include<random>
using namespace std;
int main()
{
    int orden,valorA,valorB;
    cout<<"Ingrese el orden de la matriz\n";cin>>orden;
    cout<<"Ingrese los limites de los valores para la matriz\n";cin>>valorA>>valorB;
    int Matriz[orden][orden];
    if(valorA>valorB)
        swap(valorA,valorB);//Cambia los valores de valorA y valorB
    for(int i=0;i<orden;i++)
    {
        for(int j=0;j<orden;j++)
        {
            Matriz[i][j]=rand() %(valorB-valorA+1)+valorA;
            cout<<Matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
