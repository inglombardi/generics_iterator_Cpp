//
// Created by user on 13/06/19.
//

#include "Nodo.h"

#ifndef UNTITLED5_NODOP_H
#define UNTITLED5_NODOP_H

class NodoP {

private:
    Nodo* v;//nodo della pila è costituito da un nodo per l'albero..perchè???


    //la classe Nodo contiene un attributo di classe Nodo!
    // è definita in termini di se stessa
    NodoP* next;


public:

    NodoP(){
        v= nullptr;
        next= nullptr;
    }

    Nodo* getV();
    void setV(Nodo*  v);
    NodoP* getNext();
    void setNext(NodoP* next);


};

#endif //UNTITLED5_NODOP_H
