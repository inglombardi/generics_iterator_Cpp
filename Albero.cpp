#include "Albero.h"
#include "string.h"
#include "exception"

Nodo* Albero::getR() {
    return r;
}


void Albero::setR(Nodo* r) {
    this->r = r;
}

Nodo* Albero::getT() {
    return t;
}

void Albero::setT(Nodo* t) {
    this->t = t;
}

void Albero::aggiungi(int v) {
    try{
        if (r== nullptr){
            r=new Nodo();
            r->setV(v);
            t=r;
            std::cout<<"Inserito "<<v<<std::endl;
        }else{
            std::cout<<"Vuoi andare a destra o sinistra? (D,S)";
            std::string riga;
            std::cin>>riga;
            if (riga=="D"){
                if(t->getFd()== nullptr){
                    Nodo* temp=new Nodo();
                    t->setFd(temp);
                    temp->setV(v);
                    t=r;
                    std::cout<<"Inserito "<<v<<std::endl;
                }else{
                    t=t->getFd();
                    aggiungi(v);
                }
            }
            if (riga=="S"){
                if(t->getFs()== nullptr){
                    Nodo*temp=new Nodo();
                    t->setFs(temp);
                    temp->setV(v);
                    t=r;
                    std::cout<<"Inserito "<<v<<std::endl;
                }else{
                    t=t->getFs();
                    aggiungi(v);
                }
            }


        }

    }catch (std::exception& e){
        std::exception_ptr eptr; // Tipo "puntatore" all'eccezione
        eptr = std::current_exception(); // Salva l'eccezione catturata
        std::cout<<"ERROR";
    }

}


bool Albero::vuoto(){
    return r== nullptr;
}

int Albero::primo(){
    return r->getV();
}

void Albero::togli() {
    std::cout << "E' stato richiesto di eliminare un nodo dall'albero.\n";
    try {
        if ((r != nullptr) && (r->getFs() == nullptr) && (r->getFd() == nullptr)) {
            r = nullptr;
            t = r;
        } else {
            std::cout << "Vuoi andare a destra o sinistra? (D,N)";
            std::string riga;
            if (riga == "D") {
                if ((t->getFd()->getFs() == nullptr) && (t->getFd()->getFd() == nullptr)) {
                    std::cout << t->getV();
                    t->setFd(nullptr);
                    std::cout << t->getV();
                    t = r;
                    std::cout << t->getV();
                } else {
                    t = t->getFd();
                    //System.out.println(t.getV());
                    togli();

                }
            }
            if (riga == "S") {
                if ((t->getFs()->getFs() == nullptr) && (t->getFs()->getFd() == nullptr)) {
                    t->setFs(nullptr);
                    t = r;
                } else {
                    t = t->getFs();
                    togli();
                }
            }
        }
    } catch (std::exception &e) {
        std::exception_ptr eptr; // Tipo "puntatore" all'eccezione
        eptr = std::current_exception(); // Salva l'eccezione catturata
        std::cout << "ERROR";
    }


}

IteratoreAlbero *Albero::getIteratore(){
    IteratoreAlbero* i=new IteratoreAlbero();
    i->setN(r);
    return i;
}