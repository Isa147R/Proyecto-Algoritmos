#include <iostream>
#include <ListaEnlazada.h>
using namespace std;

class NodoBST {
public:
    Contacto contacto;
    NodoBST* izquierda;
    NodoBST* derecha;

    NodoBST(Contacto c){
      contacto = c;
      izquierda = nullptr;
      derecha = nullptr;
    }
};

class ArbolBST {

private:
    NodoBST* raiz;

    void insertarRecursivo(NodoBST*& nodo, Contacto contacto) {
        if (nodo == nullptr) {
            nodo = new NodoBST(contacto);
        } else if (contacto.nombre < nodo->contacto.nombre) {
            insertarRecursivo(nodo->izquierda, contacto);
        } else if (contacto.nombre > nodo->contacto.nombre) {
            insertarRecursivo(nodo->derecha, contacto);
        } else {
            nodo->lista_enlazada.agregar(contacto);
        }
    }

public:
    ArbolBST(){
      raiz = nullptr;
    }

    void insertar(Contacto contacto) {
        insertarRecursivo(raiz, contacto);
    }

    // Implementa los demás métodos (buscar, eliminar, imprimir_orden_alfabetico, etc.)
};
