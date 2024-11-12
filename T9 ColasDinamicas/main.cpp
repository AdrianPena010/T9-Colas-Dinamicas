#include <iostream>
#include "colat9.h"

using namespace std;

int main() {
    LSLSE<Colat9> MiCola;
    Colat9 x;
    int opc;

    do {
        cout << "\n1. Dar de alta solicitud.\n2. Elaborar constancia.\n3. Salir.\nIngrese la opcion: ";
        cin >> opc;

        switch (opc) {
        case 1:
            cin >> x;
            MiCola.insertar(x);
            break;
        case 2:
            cout << "Elaborando constancia: ";
            cout << MiCola.dequeue();
            break;
        case 3:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Ingrese una opción válida" << endl;
        }
    } while (opc != 3);

    return 0;
}



