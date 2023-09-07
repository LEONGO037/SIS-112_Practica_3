// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 06/09/2023
// Fecha modificacion: 06/09/2023
// Numero de ejericio: 11
// Problema planteado: Realizar el típico juego del 3 en raya, donde habrá dos jugadores que tengan que hacer el 3 en raya,
// los signos serán el X y el O
#include <iostream>
using namespace std;
int main()
{
    char Juego[3][3]={{'-','-','-'},{'-','-','-'},{'-','-','-'}};
    bool termina=false;
    int jugador;
    for(int jugada=0;jugada<9;jugada++)
    {
        cout<<"Tablero"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                cout<<Juego[i][j]<<" ";
            cout<<"\n";
        }
        if(jugada%2==0)
            jugador=1;
        else
            jugador=2;
        cout<<"Turno del jugador "<<jugador<<"\nIngrese la posicion que desea jugar\n";
        int fila, columna;
        cin>>fila>>columna;
        while(true)
        {
            if(Juego[fila][columna]=='-' || fila<0 || fila>2 || columna<0 || columna>2)
                cin>>fila>>columna;
            else
                break;
        }
        if(jugador==1)
            Juego[fila][columna]='X';
        else
            Juego[fila][columna]='O';
        //Ver ganador columnas
        for(int i=0;i<3;i++)
        {
            if(Juego[i][0]==Juego[i][1] && Juego[i][1]==Juego[i][2] && Juego[i][0]!='-')
                termina=true;
        }
        //Ver ganador filas
        for(int i=0;i<3;i++)
        {
            if(Juego[0][i]==Juego[1][i] && Juego[1][i]==Juego[2][i] && Juego[0][i]!='-')
                termina=true;
        }
        //Diagonal 1
        if(Juego[0][0]==Juego[1][1] && Juego[2][2]==Juego[1][1] && Juego[0][0]!='-')
            termina=true;
        //Diagonal 2
        if(Juego[0][2]==Juego[1][1] && Juego[2][0]==Juego[1][1] && Juego[2][0]!='-')
            termina=true;
        if(termina)
            break;
    }
    cout<<"Tablero"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<Juego[i][j]<<" ";
        cout<<"\n";
    }
    if(termina)
        cout<<"Gana el jugador "<<jugador<<"\n";
    else
        cout<<"Empate"<<"\n";
}
