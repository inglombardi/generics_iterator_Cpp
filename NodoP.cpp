//
// Created by user on 13/06/19.
//

#include "NodoP.h"


Nodo* NodoP::getV() {
    return v;
}

void NodoP::setV(Nodo*  v) {
    this->v = v;
}

/**
 * @return the next
 */
NodoP* NodoP::getNext() {
    return next;
}
void NodoP::setNext(NodoP* next) {
    this->next = next;
}

