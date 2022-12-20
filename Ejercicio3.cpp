#include <iostream>
#include <stack>

using namespace std;

void productos();
void crear_orden(string &, int &, float &, char &);
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
    system("cls");
    string producto;
    int cantidad;
    float precio, precio_total;
    char origen;
    cout << "Solicitud de compra de producto" << endl;
    cout << "Debe Ingresar el nombre del producto:" << endl;
    cin >> producto;
    cout << "Debe Ingresar la cantidad de " << producto << ":" << endl;
    cin >> cantidad;
    cout << "Debe Ingresar el precio por unidad: Q";
    cin >> precio;
    cout << "Debe Ingresar el origen del producto, digite \'n\' si es nacional o \'e\' si es extranjero:" << endl;
    cin >> origen;
    if ((origen == 'n') || (origen == 'N'))
    {
        precio_total = precio * cantidad;
        compras.push(no_orden);
        cout << "A continuacion se hara la orden de compra No. " << compras.size() << endl;
        no_orden++;
        cout << "Producto: " << producto << endl;
        cout << "Cantidad: " << cantidad << endl;
        cout << "Precio: Q" << precio << endl;
        cout << "Total: Q" << precio_total << endl;
    }
    else if ((origen == 'e') || (origen == 'E'))
    {
        cout << "No se hara una orden de compra porque el producto no es de origen nacional." << endl;
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
