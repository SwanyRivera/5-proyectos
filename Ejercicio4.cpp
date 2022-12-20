#include <iostream>
#include <stack>

using namespace std;

void productos();
void salir();

stack<int> compras;
int no_orden = 1;

int main()
{
    productos();
    return 0;
}

void productos()
{
    string producto;
    int cantidad;
    float preciototal;
    char origen;
    cout << "Su Solicitud de compra de producto" << endl;
    cout << "Debe Ingresar el nombre del producto:" << endl;
    cin >> producto;
    cout << "Debe Ingresar la cantidad existente:" << endl;
    cin >> cantidad;
    cout << "Debe Ingresar el precio total: Q";
    cin >> preciototal;
    cout << "Debe Ingresar el origen del producto, digite \'n\' si es nacional o \'e\' si es extranjero:" << endl;
    cin >> origen;
    if ((cantidad <= 100) && (origen == 'n'))
    {
        compras.push(no_orden);
        cout << "A continuacion se hara la nueva orden de compra No. " << compras.size() << endl;
        no_orden++;
    }
    else if ((cantidad > 100) && (origen == 'n'))
    {
        cout << "No se hara una orden de compra" << endl;
    }
    else
    {
        cout << "El caracter ingresado no es valido." << endl;
    }
    salir();
}

void salir()
{
    char respuesta;
    do
    {
        cout << "Si Desea agregar crear una nueva orden para comprar otro producto? (s/n)" << endl;
        cin >> respuesta;
        if ((respuesta == 's') || (respuesta == 'S'))
        {
            cout << "Volvera a ingresar datos del producto..." << endl;
            system("pause");
            productos();
        }
        else if ((respuesta == 'n') || (respuesta == 'N'))
        {
            cout << "Saldra del programa, gracias por usarlo..." << endl;
            system("pause");
            exit(1);
        }
        else
        {
            cout << "El caracter ingresado no es valido, intentelo de nuevo." << endl;
        }
    } while ((((respuesta != 's') && (respuesta != 'S')) && (respuesta != 'n')) && (respuesta != 'N'));
}
