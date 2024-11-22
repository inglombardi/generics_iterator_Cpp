//
// Created by user on 13/06/19.
//

#include "Pila.h"

Pila::Pila(){
    testa= nullptr;
}




void Pila::push(Nodo* v){
    //creo un nuovo nodo t;
    NodoP* t=new NodoP();
    // attribuisco al campo v di t il valore v passato come parametro
    t->setV(v);
    //attribuisco al campo next di t lo stesso valore di testa t.next diventa un alias di testa
    t->setNext(testa);
    //attribuisco a testa lo stasso valore di t. ora testa punta al nuovo elemento
    //il cui campo next punta alla lista a cui puntava testa
    testa=t;
}

bool Pila::empty(){
    //pila vuota corrisponde a testa uguale a null
    return testa==nullptr;
}
void Pila::pop(){
    // faccio puntare testa al nodo next: elimino il primo nodo della lista
    testa=testa->getNext();
}
Nodo* Pila::top(){
    //rende il valore v di testa
    return testa->getV();
}

