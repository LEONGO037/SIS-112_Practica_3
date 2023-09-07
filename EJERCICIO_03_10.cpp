// Materia: Programacion I, Paralelo 4
// Autor: Leonardo Delgado Medrano
// Fecha creacion: 06/09/2023
// Fecha modificacion: 06/09/2023
// Numero de ejericio: 10
// Problema planteado: Queremos realizar una encuesta a 10 personas, en esta encuesta indicaremos el sexo (1=masculino, 2=femenino),
// si trabaja (1=si trabaja, 2= no trabaja) y su sueldo (si tiene un trabajo, sino sera un cero) estará entre 600 y 2000 (valor
// entero). Los valores pueden ser generados aleatoriamente.
#include <iostream>
#include <random>
using namespace std;
int main()
{
    const int numPersonas=10;
    int encuesta[numPersonas][3];
    //Genera la matriz
    for (int i=0;i<numPersonas;i++)
    {
        encuesta[i][0]=rand()%2+1;
        encuesta[i][1]=rand()%2+1;
        if (encuesta[i][1]==1)
            encuesta[i][2]=rand()%1401+600;
        else
            encuesta[i][2]=0;
    }
    cout<<"Sexo  Trabaja  Sueldo"<<endl;
    for(int i=0;i<numPersonas;i++)
        cout<<encuesta[i][0]<<"     "<<encuesta[i][1]<<"        "<<encuesta[i][2]<<endl;
    float hombresTotal=0.0;
    float mujeresTotal=0.0;
    float hombresTrabajan=0.0;
    float mujeresTrabajan=0.0;
    float sueldoHombresTrabajan=0.0;
    float sueldoMujeresTrabajan=0.0;
    for (int i=0;i<numPersonas;i++)
    {
        if (encuesta[i][0]==1)
        {
            hombresTotal++;
            if (encuesta[i][1]==1)
            {
                hombresTrabajan++;
                sueldoHombresTrabajan+=encuesta[i][2];
            }
        }
        else
        {
            mujeresTotal++;
            if (encuesta[i][1]==1)
            {
                mujeresTrabajan++;
                sueldoMujeresTrabajan+=encuesta[i][2];
            }
        }
    }
    double sueldoPromedioHombresTrabajan=0.0, sueldoPromedioMujeresTrabajan=0.0;
    if (hombresTrabajan>0)
        sueldoPromedioHombresTrabajan=sueldoHombresTrabajan/hombresTrabajan;
    if (mujeresTrabajan>0)
        sueldoPromedioMujeresTrabajan=sueldoMujeresTrabajan/mujeresTrabajan;
    cout<<"Porcentaje de hombres: "<<(hombresTotal/numPersonas)*100.0<<"%"<<endl;
    cout<<"Porcentaje de mujeres: "<<(mujeresTotal/numPersonas)*100.0<<"%"<<endl;
    cout<<"Porcentaje de hombres que trabajan: "<<(hombresTrabajan/numPersonas)*100.0<<"%"<<endl;
    cout<<"Porcentaje de mujeres que trabajan: "<<(mujeresTrabajan/numPersonas)*100.0<<"%"<<endl;
    cout<<"Sueldo promedio de hombres que trabajan: $"<<sueldoPromedioHombresTrabajan<<endl;
    cout<<"Sueldo promedio de mujeres que trabajan: $"<<sueldoPromedioMujeresTrabajan<<endl;
    return 0;
}
