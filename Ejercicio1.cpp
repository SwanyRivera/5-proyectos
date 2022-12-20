#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> trabajador;
    string nombre, puesto, direccion;
    int dias_trabajados;
    float sueldo_diario;
    cout << "Puede Ingresar el nombre del empleado:" << endl;
    cin >> nombre;
    trabajador.push(nombre);
    cout << "Puede Ingresar el puesto que ejerce:" << endl;
    cin >> puesto;
    trabajador.push(puesto);
    cout << "Debe Ingresar la direccion:" << endl;
    cin >> direccion;
    trabajador.push(direccion);
    cout << "Debe Ingresar cantidad de dias trabajados:" << endl;
    cin >> dias_trabajados;
    cout << "Debe Ingresar el sueldo diario:" << endl;
    cin >> sueldo_diario;
    if (sueldo_diario * dias_trabajados >= 500.00)
    {
        cout << "El empleado " << trabajador.front() << " tendra su cheque semanal con el valor de $" << sueldo_diario * dias_trabajados << endl;
    }
    else
    {
        cout << "El empleado " << trabajador.front() << " recibira un bono de despensa semanal de $150.00" << endl;
    }
    system("pause");
    return 0;
}
