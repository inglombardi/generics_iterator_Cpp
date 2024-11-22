//
// Created by user on 13/06/19.
//

#include "IteratoreAlbero.h"

IteratoreAlbero::IteratoreAlbero(){
    p=new Pila();
    n= nullptr;
}

Pila* IteratoreAlbero::getP() {
    return p;
}

void IteratoreAlbero::setP(Pila *p) {
    this->p = p;
}

Nodo *IteratoreAlbero::getN() {
    return n;
}

void IteratoreAlbero::setN(Nodo* n) {
    this->n = n;
}

bool IteratoreAlbero::hasNext(){
    return (n!= nullptr);
}

int IteratoreAlbero::next(){
    int v=n->getV();
    //Posizionarsi sul prossimo
    if (n->getFd()!= nullptr){
        p->push(n);
        n=n->getFd();
    }else{
        if (n->getFs()!= nullptr){
            n=n->getFs();
        }else{
            bool trovato=false;
            n= nullptr;
            while(!trovato){
                if (!p->empty()){
                    if(p->top()->getFs()!= nullptr){
                        n=p->top()->getFs();
                        p->pop();
                    }else{
                        p->pop();
                    }
                }
                trovato=(n!= nullptr)||(p->empty());
            }
        }
    }
    return v;
}

