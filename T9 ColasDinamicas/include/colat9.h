#ifndef COLAT9_H
#define COLAT9_H

#include <iostream>
using namespace std;

class Colat9 {
private:
    string alumno;
    string carrera;
    int materias_aprob;
    float promedio;

public:
    Colat9();
    Colat9(string a, string c, int m, float p);
    void operator=(const Colat9& x);

    friend ostream& operator<<(ostream&, const Colat9&);
    friend istream& operator>>(istream&, Colat9&);
};

template <class T>
class LSLSE {
public:
    LSLSE() : lista(nullptr), fin(nullptr) {}
    bool vacia() const { return lista == nullptr; }
    void insertar(const T& elem);
    T dequeue();
    void mostrar() const;

private:
    struct node {
        T data;
        node* sig;
        node() : sig(nullptr) {}
    };

    node* lista;
    node* fin;
};

#endif // COLAT9_H
