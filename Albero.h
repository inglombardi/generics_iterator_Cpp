//
// Created by user on 13/06/19.
//
#include "Nodo.h"
#include "Pila.h"
#include "string.h"
#include "IteratoreAlbero.h"
#include <iostream>
#ifndef UNTITLED5_ALBERO_H
#define UNTITLED5_ALBERO_H

class Albero {

public:
    Nodo* r;
    Nodo* t;

    Albero(){
        r= nullptr;
        t= nullptr;
    }


    Nodo* getR();
    void setR(Nodo* r);
    Nodo* getT();
    void setT(Nodo* t);
    void aggiungi(int v);
    void togli();
    bool vuoto();
    int primo();
    IteratoreAlbero *getIteratore();



private:
    void visitaA(Nodo* r){
        if (r!= nullptr){
            std::cout<<r->getV()<<std::endl;
            visitaA(r->getFd());
            visitaA(r->getFs());
        }
        //System.out.println(r.getV());
        //System.out.println(r.getFd().getV());
    }
public:
    void visitaA(){
        visitaA(r);
        //System.out.println(r.getV());
        //System.out.println(r.getFd().getV());
    }

private:
    void visitaS(Nodo* r){
        if (r!= nullptr){
            visitaS(r->getFd());
            std::cout<<r->getV()<<std::endl;
            visitaS(r->getFs());
        }
        //System.out.println(r.getV());
        //System.out.println(r.getFd().getV());
    }
public:
    void visitaS(){
        visitaS(r);
        //System.out.println(r.getV());
        //System.out.println(r.getFd().getV());
    }

private:
    void visitaP(Nodo* r){
        if (r!= nullptr){
            visitaP(r->getFd());
            visitaP(r->getFs());
            std::cout<<r->getV()<<std::endl;
        }
        //System.out.println(r.getV());
        //System.out.println(r.getFd().getV());
    }
public:
    void visitaP(){
        visitaP(r);
        //System.out.println(r.getV());
        //System.out.println(r.getFd().getV());
    }




};

#endif //UNTITLED5_ALBERO_H
