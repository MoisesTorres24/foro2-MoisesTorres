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

        switch (opcion)
        {
        case 1:
            cout << "\nEl precio de la torta es de: " << precioTorta << endl;
            break;
        case 2:
            cout << "\nEl precio de las palomitas es de: " << precioPalomita << endl;
            break;
        case 3:
            cout << "\nEl precio de la botella de agua es de: " << precioAgua << endl;
            break;
        case 4:
            salir = true;
            return 0;
            break;
        default:
            cout << "\nOpción no válida. Ingresa de nuevo la opción)";
            break;
        }
    }
    return 0;
}
