// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 05/09/2023
// Fecha modificacion: 05/09/2023
// Numero de ejericio: 3
// Problema planteado: Generar una matriz de N x N con números al azar entre A y B, y determinar:
// La suma de la última columna
// El producto total de la última fila
// Obtener el mayor valor y su posición
// Obtener la desviación estándar de todos los elementos de la matriz
#include<iostream>
#include<random>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int orden, valorA, valorB;
    cout<<"Ingrese el orden de la matriz\n";
    cin>>orden;
    cout<<"Ingrese los limites de los valores para la matriz\n";
    cin>>valorA>>valorB;
    if(valorA>valorB)
        swap(valorA,valorB);//Cambia los valores de valorA y valorB
    int Matriz[orden][orden];
    cout<<"La matriz es:\n";
    int mayor=valorA, fila, columna, suma=0,producto=1;
    float SUMA=0.0;
    for(int i=0;i<orden;i++)
    {
        for(int j=0;j<orden;j++)
        {
            Matriz[i][j]=rand() %(valorB-valorA+1)+valorA;
            cout<<Matriz[i][j]<<" ";
            SUMA+=Matriz[i][j];
            if(Matriz[i][j]>mayor)
            {
                mayor=Matriz[i][j];
                fila=i;
                columna=j;
            }
            if(j==orden-1)
                suma+=Matriz[i][j];
            if(i==orden-1)
                producto*=Matriz[i][j];
        }
        cout<<"\n";
    }
    float media = SUMA/pow(orden,2);
    float sumacuadrados=0.0;
    for(int i=0;i<orden;i++)
    {
        for(int j=0;j<orden;j++)
            sumacuadrados+=pow((Matriz[i][j]-media),2);
    }
    float varianza = sumacuadrados/pow(orden,2);
    float desviacion = sqrt(varianza);
    cout<<"La suma de la ultima columa es "<<suma<<endl;
    cout<<"El producto de la ultima fila es "<<producto<<endl;
    cout<<"El valor mayor es "<<mayor<<" y su posicion es "<<fila<<" "<<columna<<endl;
    cout<<"La desviacion estandar es "<<fixed<<setprecision(6)<<desviacion;
    return 0;
}
