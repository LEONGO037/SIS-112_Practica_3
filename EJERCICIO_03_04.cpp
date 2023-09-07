// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 06/09/2023
// Fecha modificacion: 06/09/2023
// Numero de ejericio: 4
// Problema planteado: En la segunda temporada de The Walking Dead, los personajes llegaron a una cárcel para refugiarse.
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string Matriz[3][4]={{"x","o","x","o"},{"o","o","o","o"},{"o","o","x","o"}};
    cout<<"a) Matriz que describe el area\n";
    //Vector que guarda las posiciones de los zombies
    vector<pair<int,int>>Posicion;
    int filas=0, columnas=0;
    for(int i=0;i<3;i++)
    {
        bool libreFila=true;
        for (int j=0;j<4;j++)
        {
            cout<<Matriz[i][j]<<" ";
            if(Matriz[i][j]=="x")
            {
                Posicion.emplace_back(i,j);
                libreFila=false;
            }
            bool librecolumna=true;
            for(int k=0;k<3;k++)
            {
                if(Matriz[k][j]=="x")
                    librecolumna=false;
            }
            if(librecolumna)
                columnas++;
        }
        if(libreFila)
            filas++;
        cout<<"\n";
    }
    cout<<"b) El numero de filas libres es "<<filas<<endl;
    cout<<"El numero de columas libres es "<<columnas/3<<endl;
    cout<<"c) Las posiciones donde hay zombies son:"<<endl;
    int zombies=0;
    for(int i=0;i<Posicion.size();i++)
    {
        cout<<Posicion[i].first<<"--"<<Posicion[i].second<<endl;
        if(Posicion[i].second==0)
            zombies++;
    }
    cout<<"d) La cantidad de muertos vivientes es en complejo es "<<Posicion.size()<<endl;
    if(zombies==2)
        cout<<"e) No es posible entrar al complejo\n";
    else
        cout<<"e) Es posible entrar al complejo\n";
    return 0;
}
