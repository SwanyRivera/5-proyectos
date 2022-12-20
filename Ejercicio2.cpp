#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> notas;
    string nombre;
    char seccion;
    int carrera, ciclo, n;
    float promedio;
    cout << "Notas " << endl;
    cout << "Ingrese el nombre del Estudiante:" << endl;
    cin >> nombre;
    cout << "Carreras que estan disponibles:" << endl;
    cout << "1. Medicina" << endl;
    cout << "2. Sistemas" << endl;
    cout << "3. Psicologia" << endl;
    cout << "Ingrese el numero de la carrera que estudia." << endl;
    cin >> carrera;
    cout << "Debe Ingrese el ciclo y seccion que cursa:" << endl;
    cin >> ciclo >> seccion;
    cout << "DebeIngrese la primer nota:" << endl;
    cin >> n;
    notas.push(n);
    cout << "Debe Ingresar la segunda nota:" << endl;
    cin >> n;
    notas.push(n);
    cout << "Debe Ingresar la tercera nota:" << endl;
    cin >> n;
    notas.push(n);
    system("pause");
    if (carrera == 1)
    {
        cout << "Boleta informativa de " << nombre << endl;
        cout << "Estudiante de Medicina, " << ciclo << " Ciclo, Seccion " << seccion << endl;
        cout << "Calificaciones: " << endl;
        cout << "\tPrimer Bimestre " << notas.front();
        notas.pop();
        cout << "\tSegundo Bimestre " << notas.front();
        notas.pop();
        cout << "\tTercer Bimestre " << notas.front() << endl;
        notas.pop();
    }
    else
    {
        system("Color 60");
        cout << "\a\tSolicitamos una reunion con los padres de " << nombre << " para una charla con sus profesores." << endl;
    }
    system("pause");
    return 0;
}
