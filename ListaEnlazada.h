#include <iostream>

using namespace std;

class ListaEnlazada {
private:
    struct NodoLista {
        Contacto contacto;
        NodoLista* siguiente;

        NodoLista(Contacto c) {
          Contacto = c;
          siguiente = nullptr;
        }
    };

    NodoLista* cabeza;

public:
    ListaEnlazada(){
      cabeza = nullptr;
    }

    void agregar(Contacto contacto) {
        // Implementa la lógica para agregar un nodo a la lista enlazada
    }

    // Implementa los demás métodos necesarios
};
