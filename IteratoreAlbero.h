#include "Pila.h"

#ifndef UNTITLED5_ITERATOREALBERO_H
#define UNTITLED5_ITERATOREALBERO_H

class IteratoreAlbero {
private:
    Pila *p;
    Nodo *n;
    Nodo *t;



public:
    IteratoreAlbero();
    Pila* getP();
    void setP(Pila *p);
    Nodo *getN();
    void setN(Nodo* n);
    bool hasNext();
    int next();
};

#endif //UNTITLED5_ITERATOREALBERO_H
