// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 06/09/2023
// Fecha modificacion: 06/09/2023
// Numero de ejericio: 7
// Problema planteado: Efectuar la suma de una matriz tridimensional de orden n x n x n
#include<iostream>
#include<random>
using namespace std;
int main()
{
    int orden;
    cout<<"Ingrese el orden de la matriz\n";cin>>orden;
    int Matriz1[orden][orden][orden],Matriz2[orden][orden][orden],Matriz3[orden][orden][orden];
    cout<<"Matriz 1\n";
    for(int i=0;i<orden;i++)
    {
        cout<<"-------Capa "<<i<<"----------\n";
        for(int j=0;j<orden;j++)
        {
            for(int k=0;k<orden;k++)
            {
                Matriz1[i][j][k]=rand()%100;
                cout<<Matriz1[i][j][k]<<"  ";
            }
            cout<<"\n";
        }
    }
    cout<<"Matriz 2\n";
    for(int i=0;i<orden;i++)
    {
        cout<<"-------Capa "<<i<<"----------\n";
        for(int j=0;j<orden;j++)
        {
            for(int k=0;k<orden;k++)
            {
                Matriz2[i][j][k]=rand()%100;
                cout<<Matriz2[i][j][k]<<"  ";
                Matriz3[i][j][k]=Matriz2[i][j][k]+Matriz1[i][j][k];
            }
            cout<<"\n";
        }
    }
    cout<<"Matriz suma\n";
    for(int i=0;i<orden;i++)
    {
        cout<<"-------Capa "<<i<<"----------\n";
        for(int j=0;j<orden;j++)
        {
            //Imprime la matriz suma
            for(int k=0;k<orden;k++)
                cout<<Matriz3[i][j][k]<<"  ";
            cout<<"\n";
        }
    }
    return 0;
}
