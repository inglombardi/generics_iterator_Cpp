//
// Created by user on 13/06/19.
//

#ifndef UNTITLED5_NODO_H
#define UNTITLED5_NODO_H


class Nodo {

public :
    int v;
    Nodo *fd;
    Nodo *fs;

    Nodo();

    int getV();

    void setV(int v);

    Nodo *getFd();

    void setFd(Nodo *fd);

    Nodo *getFs();

    void setFs(Nodo *fs);
};

#endif //UNTITLED5_NODO_H
