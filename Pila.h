#include "Nodo.h"
#include "NodoP.h"
#ifndef UNTITLED5_PILA_H
#define UNTITLED5_PILA_H

class Pila {


private:


    //Unico attributo un nodo. E' la testa della lista che costituisce la pila
    NodoP* testa;
    // Costruttore. Il nodo viene inizializzato a nul che vuol dire pila vuota



public:
    Pila();
    void push(Nodo* v);
    bool empty();
    void pop();
    Nodo* top();


};


#endif //UNTITLED5_PILA_H
