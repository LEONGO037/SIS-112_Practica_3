// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 06/09/2023
// Fecha modificacion: 06/09/2023
// Numero de ejericio: 5
// Problema planteado: Generar la matriz para un orden NxN
//Sea n=5
//1 2 3 4 5
//3 4 5 6 7
//5 6 7 8 9
//7 8 9 10 11
//9 10 11 12 13
#include<iostream>
using namespace std;
int main()
{
    int orden;
    cout<<"Ingrese el orden de la matriz\n";cin>>orden;
    int Matriz[orden][orden];
    for(int i=0;i<orden;i++)
    {
        for(int j=0;j<orden;j++)
        {
            if(i==0)
                Matriz[i][j]=j+1;
            else
                Matriz[i][j]=Matriz[i-1][j]+2;
            //Imprime la matriz
            cout<<Matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
