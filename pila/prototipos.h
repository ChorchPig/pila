#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED

struct nodo{
    int dato;
    nodo *siguiente;
};

void agregarPila(nodo *&, int);
void sacarPila(nodo *&, int &);
void confirmarSalida(int *);

#endif // PROTOTIPOS_H_INCLUDED
