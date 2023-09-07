// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 05/09/2023
// Fecha modificacion: 05/09/2023
// Numero de ejericio: 2
// Problema planteado: Generar la matriz espiral para un orden n
#include<iostream>
using namespace std;
int main()
{
    int orden;
    cout<<"Ingrese el orden de la matriz\n";cin>>orden;
    int Matriz[orden][orden];
    int valor=1;
    int filamin=0,filamax=orden-1,columnamin=0,columnamax=orden-1;
    //Se crea la matriz en espiral
    while(valor<=orden*orden)
    {
        for(int i=columnamin;i<=columnamax;i++)
        {
            Matriz[filamin][i]=valor;
            valor++;
        }
        filamin++;
        for(int i=filamin;i<=filamax;i++)
        {
            Matriz[i][columnamax]=valor;
            valor++;
        }
        columnamax--;
        for(int i=columnamax;i>=columnamin;i--)
        {
            Matriz[filamax][i]=valor;
            valor++;
        }
        filamax--;
        for(int i=filamax;i>=filamin;i--)
        {
            Matriz[i][columnamin]=valor;
            valor++;
        }
        columnamin++;
    }
    cout<<"La matriz espiral es:\n";
    for(int i=0;i<orden;i++)
    {
        for(int j=0;j<orden;j++)
            cout<<Matriz[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
