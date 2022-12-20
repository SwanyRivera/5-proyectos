#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> trabajador;
    string nombre, departamento, direccion;
    int dias_trabajados;
    float sueldo_diario;
    cout << "Debe Ingresar el nombre del empleado:" << endl;
    cin >> nombre;
    trabajador.push(nombre);
    cout << "Debe Ingresar el departamento al que pertenece:" << endl;
    cin >> departamento;
    trabajador.push(departamento);
    cout << "Debe Ingresar la direccion:" << endl;
    cin >> direccion;
    trabajador.push(direccion);
    cout << "Ingrese cantidad de dias trabajados:" << endl;
    cin >> dias_trabajados;
    cout << "Ingrese el sueldo diario:" << endl;
    cin >> sueldo_diario;
    if ((sueldo_diario * dias_trabajados >= 500.00) && ((departamento == "produccion") || (departamento == "Produccion")))
    {
        cout << "El empleado " << trabajador.front() << " tendra su cheque semanal con el valor de $" << sueldo_diario * dias_trabajados << endl;
    }
    else
    {
        cout << "El empleado " << trabajador.front() << " recibira un bono de despensa con el valor de $" << ((sueldo_diario * dias_trabajados) * 25) / 100 << " que equivale el 25% de su sueldo semanal" << endl;
    }
    system("pause");
    return 0;
}
