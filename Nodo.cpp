//
// Created by user on 13/06/19.
//

#include "Nodo.h"


Nodo::Nodo() {
        v=0;
        fs= nullptr;
        fd= nullptr;
}

int Nodo::getV(){
    return v;
}

void Nodo::setV(int v) {
    this->v = v;
}

Nodo* Nodo::getFd() {
    return fd;
}

void Nodo::setFd(Nodo* fd) {
    this->fd = fd;
}

Nodo* Nodo::getFs() {
    return fs;
}

void Nodo::setFs(Nodo *fs) {
    this->fs = fs;
}