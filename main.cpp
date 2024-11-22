#include <iostream>
#include "Albero.h"
#include "Pila.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout<<"******************INIZIO CREAZIONE ALBERO DI NICOLA LOMBARDI******************"<<std::endl;
    Albero *a;
    a=new Albero();
    a->aggiungi(3);
    a->aggiungi(4);
    a->aggiungi(5);
    a->aggiungi(6);
    a->aggiungi(7);
    a->aggiungi(0);
    a->aggiungi(44);
    a->aggiungi(55);
    a->aggiungi(99);
    a->aggiungi(22);
    a->aggiungi(33);
    a->aggiungi(66);
    a->aggiungi(88);;

    std::cout<<"******************INIZIO Visita di Albero******************"<<std::endl;
    std::cout<<"Visita di tipo *anticipata*"<<std::endl;
    a->visitaA();


    std::cout<<"---------------------------Visita di tipo *simmetrica*------------------------\n"<<std::endl;
    a->visitaS();
    std::cout<<"-----------------------Visita di tipo *posticipata*---------------------\n"<<std::endl;
    a->visitaP();


    a->togli();


    std::cout<<"------------------------------Visita anticipata---------------------------\n"<<std::endl;
    a->visitaA();
    std::cout<<"------------------------------Visita simmetrica-----------------------------\n"<<std::endl;
    a->visitaS();
    std::cout<<"-------------------------------Visita posticipata-----------------------------\n"<<std::endl;
    a->visitaP();



    std::cout<<"__________________________Visita con Iteratore____________________________\n"<<std::endl;
    IteratoreAlbero* i=a->getIteratore();
    while (i->hasNext()){
        std::cout<<"[";
        std::cout<<i->next();
        std::cout<<"]->";
    }
    std::cout<<"\n\n\n\n\n"<<std::endl;
    std::cout<<"Visita anticipata"<<std::endl;
    a->visitaA();

    std::cout<<"CONCLUSIONE:si noti come il comportamento dell'iteratore sia di tipo anticipato. "
               "Il programma è estendibile. Si può aggiungere la gestione mediante heap.\n"
               "Anche una coda di priorità non sarebbe una cattiva idea."<<std::endl;
    return 0;
}