// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 06/09/2023
// Fecha modificacion: 06/09/2023
// Numero de ejericio: 14
// Problema planteado: Simule una elección de nuestro país Bolivia. En ello se mostrará las elecciones
// por departamento y existirá N candidatos.
// El programa debe pedir la cantidad de votos por departamento y candidato y
// almacenarlos en una matriz.
// El programa debe calcular lo siguiente:
// • Si un candidato gana con el 50% + 1 voto es ganador absoluto.
// • Si no ningún candidato que logre el 50% + 1 voto el programa debe sacar
// los dos mas votados para una segunda vuelta.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int candidatos;
    cout<<"Ingrese la cantidad de candidatos\n";cin>>candidatos;
    int Votos[9][candidatos];
    string Dpto[9]={"La Paz","Santa Cruz","Cochabamba","Potosi","Oruro","Chuquisaca","Tarija","Beni","Pando"};
    float VotoCandidato[candidatos];
    float suma=0.0;
    for(int i=0;i<candidatos;i++)
    {
        VotoCandidato[i]=0.0;
        cout<<"Para el candidato "<<i+1<<"\n";
        for(int j=0;j<9;j++)
        {
            cout<<"en "<<Dpto[j]<<"\n";
            cin>>Votos[i][j];
            VotoCandidato[i]+=Votos[i][j];
        }
        suma+=VotoCandidato[i];
    }
    float porcentaje[candidatos];
    int candidato[candidatos];
    int menora50=0;
    for(int i=0;i<candidatos;i++)
    {
        porcentaje[i]=(VotoCandidato[i]/suma)*100.0;
        candidato[i]=i+1;
        if(porcentaje[i]>50.0)
        {
            cout<<"El ganador es el candidato "<<i+1<<"\n";
            break;
        }
        else
            menora50++;
    }
    //Solo si hay segunda vuelta
    if(menora50==candidatos)
    {
        cout<<"Segunda vuelta\n";
        for(int i=0;i<candidatos;i++)
        {
            for(int j=0;j<candidatos-1;j++)
            {
                if(porcentaje[j]>porcentaje[j+1])
                {
                    swap(porcentaje[j],porcentaje[j+1]);
                    swap(candidato[j],candidato[j+1]);
                }
            }
        }
        int NuevosVotos[9][2];
        int nuevoscandidatos[2]={candidato[candidatos-1],candidato[candidatos-2]};
        float VotoCandidatoNuevo[2];
        for(int i=0;i<2;i++)
        {
            VotoCandidatoNuevo[i]=0.0;
            cout<<"Para el candidato "<<nuevoscandidatos[i]<<"\n";
            for(int j=0;j<9;j++)
            {
                cout<<"en "<<Dpto[j]<<"\n";
                cin>>NuevosVotos[i][j];
                VotoCandidatoNuevo[i]+=NuevosVotos[i][j];
            }
        }
        if(VotoCandidatoNuevo[0]>VotoCandidatoNuevo[1])
            cout<<"El ganador es el candidato "<<nuevoscandidatos[0]<<"\n";
        else if(VotoCandidatoNuevo[1]>VotoCandidatoNuevo[0])
            cout<<"El ganador es el candidato "<<nuevoscandidatos[1]<<"\n";
        else
            cout<<"No hay ganador, emaptaron\n";
    }
    return 0;
}
