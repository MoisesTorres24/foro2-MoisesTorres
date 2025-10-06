#include <iostream>
using namespace std;

int main()
{
    bool salir = false;
    int opcion, precioTorta = 25, precioPalomita = 10, precioAgua = 15;

    while (!salir)
    {
        cout << "\n====Menú====" << "\n1) Torta" << "\n2) Palomitas" << "\n3) Agua" << "\n4) Salir" << "\nSeleccione el producto:";
        cin >> opcion;

        if (opcion == 1)
        {
            cout << "\nEl precio de la torta es de: " << precioTorta << endl;
        }
        else if (opcion == 2)
        {
            cout << "\nEl precio de las palomitas es de: " << precioPalomita << endl;
        }
        else if (opcion == 3)
        {
            cout << "\nEl precio de la botella de agua es de: " << precioAgua << endl;
        }
        else if (opcion == 4)
        {
            salir = true;
        }
        else
        {
            cout << "\nOpción no válida. Ingresa de nuevo la opción)";
        }
    }
    return 0;
}