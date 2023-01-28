#include <iostream>
#include "prototipos.h"

void agregarPila(nodo *&pila, int n){
    nodo *nuevoNodo= new nodo();
    nuevoNodo->dato=n;
    nuevoNodo->siguiente=pila;
    pila=nuevoNodo;
}

void sacarPila(nodo *&pila, int &n){
    nodo *aux=pila;
    n=aux->dato;
    pila=aux->siguiente;
    delete aux;
}

void confirmarSalida(int *option){
    std::cout<<"You are about to exit the program, press 0 to confirm: ";
    std::cin>>*option;
}
