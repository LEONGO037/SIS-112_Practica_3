// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 06/09/2023
// Fecha modificacion: 06/09/2023
// Numero de ejericio: 13
// Problema planteado: La farmacia FARMACARP tiene N sucursales, leer sus ventas por mes de un año entero de cada sucursal y calcule:
// a. Total, de ventas
// b. Total, de ventas por sucursal.
// c. Sucursal que más ha vendido.
// d. Sucursal que menos ha vendido.
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int sucursales;
    cout<<"Ingrese la cantidad de sucursales\n";cin>>sucursales;
    int Ventas[sucursales][12];
    string meses[12]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    cout<<"Ingrese las ventas de cada mes, por sucursal\n";
    int suma=0;
    int Total[sucursales];
    for(int i=0;i<sucursales;i++)
    {
        Total[i]=0;
        cout<<"Para la sucursal "<<i+1<<"\n";
        for(int j=0;j<12;j++)
        {
            cout<<"Para "<<meses[j]<<"\n";
            cin>>Ventas[i][j];
            suma+=Ventas[i][j];
            Total[i]+=Ventas[i][j];
        }
    }
    cout<<"El total de ventas es "<<suma<<"\n";
    int maximo=Total[0],minimo=Total[0],vendiomas, vendiomenos;
    //Halla la sucursal que vendio más y a la que vendio menos
    for(int i=0;i<sucursales;i++)
    {
        cout<<"La venta total de la sucursal "<<i+1<<" es "<<Total[i]<<"\n";
        if(Total[i]>maximo)
        {
            maximo=Total[i];
            vendiomas=i+1;
        }
        if(Total[i]<minimo)
        {
            minimo=Total[i];
            vendiomenos=i+1;
        }
    }
    cout<<"La sucursal que vendio mas es la sucursal "<<vendiomas<<" con "<<Total[vendiomas-1]<<" ventas\n";
    cout<<"La sucursal que vendio menos es la sucursal "<<vendiomenos<<" con "<<Total[vendiomenos-1]<<" ventas\n";
    return 0;
}
