#include "colat9.h"

Colat9::Colat9() : alumno("NULL"), carrera("NULL"), materias_aprob(0), promedio(0.0) {}

Colat9::Colat9(string a, string c, int m, float p) : alumno(a), carrera(c), materias_aprob(m), promedio(p) {}

void Colat9::operator=(const Colat9& x) {
    alumno = x.alumno;
    carrera = x.carrera;
    materias_aprob = x.materias_aprob;
    promedio = x.promedio;
}

ostream& operator<<(ostream& o, const Colat9& c) {
    o << "\nDATOS DE CONSTANCIA\n";
    o << "Alumno: " << c.alumno << "\t Carrera: " << c.carrera << "\t Materias aprobadas: " << c.materias_aprob << "\t Promedio: " << c.promedio << endl;
    return o;
}

istream& operator>>(istream& i, Colat9& c) {
    cout << "\n Nombre de alumno: ";
    i >> c.alumno;
    cout << "\n Carrera: ";
    i >> c.carrera;
    cin.ignore();
    cout << "\n Materias aprobadas: ";
    i >> c.materias_aprob;
    cout << "\n Promedio: ";
    i >> c.promedio;

    return i;
}

template <class T>
void LSLSE<T>::insertar(const T& elem) {
    node* nuevo = new node;
    nuevo->data = elem;
    nuevo->sig = nullptr;

    if (vacia()) {
        lista = nuevo;
        fin = nuevo;
    } else {
        fin->sig = nuevo;
        fin = nuevo;
    }
}

template <class T>
T LSLSE<T>::dequeue() {
    if (vacia()) {
        cout << "\nLa cola está vacía" << endl;
        return T();
        node* aux = lista;
        T data = aux->data;
        lista = lista->sig;

        if (lista == nullptr) {
            fin = nullptr;
        }

        delete aux;
        return data;
    }
}

template <class T>
void LSLSE<T>::mostrar() const {
    node* aux = lista;
    while (aux != nullptr) {
        cout << aux->data;
        aux = aux->sig;
    }
}

template class LSLSE<Colat9>;
