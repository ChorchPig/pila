#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED

struct nodo{
    nodo *siguiente;
    int dato;
};
enum{
    cantMesas=3
};

void insertarFila(nodo *&, nodo *&, int);
void quitarFila(nodo *&, nodo *&);
void confirmarSalida(int *);
bool llamarMesa(bool *&);
void liberarMesa(bool *&);

#endif // PROTOTIPOS_H_INCLUDED
